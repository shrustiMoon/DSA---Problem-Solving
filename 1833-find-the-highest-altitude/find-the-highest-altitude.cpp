class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>altitudes;
        int largest_altitude = 0;
        altitudes.push_back(0);
        for(int i=0; i<gain.size(); i++){
            int sum = gain[i] + altitudes[i];
            altitudes.push_back(sum);
            largest_altitude = max(largest_altitude,sum);
        }
        return largest_altitude;
    }
};