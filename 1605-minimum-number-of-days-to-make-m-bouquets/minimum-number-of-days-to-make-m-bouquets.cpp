class Solution {
public:
    // Function to find Minimum in array
    int Find_Mini(vector<int>& bloomDay){
        int mini = INT_MAX;
        int n = bloomDay.size();
        for(int i=0; i<n; i++){
            mini = min(mini,bloomDay[i]);
        }
        return mini;
    }
    // Function to find Maximum in array
    int Find_Maxi(vector<int>& bloomDay){
        int maxi = INT_MIN;
        int n = bloomDay.size();
        for(int i=0; i<n; i++){
            maxi = max(maxi,bloomDay[i]);
        }
        return maxi;
    }
    // Function to find Possible BloomDay
    bool possible_bloom(vector<int>& bloomDay, int day, int m, int k){
        int n = bloomDay.size();
        int cnt = 0;
        int no_of_bouqets = 0;

        for(int i=0; i<n; i++){
            if(bloomDay[i]<=day)
               cnt++;
            else{
                no_of_bouqets += (cnt/k);
                cnt = 0;
            }   
        }
        no_of_bouqets += (cnt/k);;

        if(no_of_bouqets>=m) return true;
        else return false;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        int low = Find_Mini(bloomDay);
        int high = Find_Maxi(bloomDay);
        int ans = high;

        if(1LL * m * k > n)
           return -1;

        while(low<=high){
            int mid = (low+high)/2;

            if(possible_bloom(bloomDay,mid,m,k)==true){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};