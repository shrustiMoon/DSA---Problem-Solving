class Solution {
public:
    // Function to find maximum element in array
    int Find_Max(vector<int>& piles){
        int maxi = INT_MIN;
        int n = piles.size();
        for(int i=0; i<n; i++){
            maxi = max(maxi, piles[i]);
        }
        return maxi;
    }

    // Function to Calculate the TotalHrs
    long long CalculateTotalHrs(vector<int>& piles, int hourly){
        long long Total = 0;
        int n = piles.size();
        for(int i=0; i<n; i++){
            Total += ceil((double)piles[i]/hourly);
        }
        return Total;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        // low and high is range of the answer
        int low = 1;
        int high = Find_Max(piles);
        int ans = INT_MAX;

        while(low<=high){
            int mid = (low+high)/2;
            long long TotalHrs = CalculateTotalHrs(piles,mid);

            if(TotalHrs<=h){
                ans = mid;
                high = mid-1;   // Eliminate Right half to find minimum
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};