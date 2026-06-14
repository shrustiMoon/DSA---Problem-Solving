class Solution {
public:
    // Function to find Maximum Value in array
    int Max_Value(vector<int>& piles){
        int maxi = INT_MIN;
        int n = piles.size();
        for(int i=0; i<n; i++){
            maxi = max(maxi,piles[i]);
        }
        return maxi;
    }

    // Function to Calculate TotalHrs
    long long TotalHrs(vector<int>& piles, int hourly){
        long long Total = 0;
        int n = piles.size();
        for(int i=0; i<n; i++){
            Total += ceil((double)piles[i]/hourly);
        }
        return Total;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int low = 1;
        int high = Max_Value(piles);
        int ans = INT_MAX;

        while(low<=high){
            int mid = (low+high)/2;
            long long total_hrs = TotalHrs(piles,mid);

            if(total_hrs<=h){
                ans = mid;
                high = mid-1;   // Eliminate the right to find minimum
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};