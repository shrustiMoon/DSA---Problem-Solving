class Solution {
public:
    int FindDays(vector<int>& weights, int capacity){
        int n = weights.size();
        int days = 1;
        int load = 0;
        for(int i=0; i<n; i++){
            if(weights[i]+load>capacity){
                days += 1;
                load = weights[i];
            }
            else{
                load += weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        // Calculate low and high
        int low = INT_MIN;
        int high = 0;
        int ans = -1;
        for(auto it : weights){
            low = max(low,it);
            high += it;
        }

        while(low<=high){
            int mid = (low+high)/2;
            int No_of_Days = FindDays(weights,mid);
            if(No_of_Days<=days){
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