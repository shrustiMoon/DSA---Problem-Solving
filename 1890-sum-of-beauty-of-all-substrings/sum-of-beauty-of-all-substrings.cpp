class Solution {
public:
    int beautySum(string s) {
       int n = s.length();
       int sum = 0;

       // Loop through all substrings
       for(int i=0; i<n; i++){
        unordered_map<char, int>freq;

        for(int j=i; j<n; j++){
            freq[s[j]]++;
            // Maintain a freq map of characters for each substring
            int maxi = INT_MIN;
            int mini = INT_MAX;

            // Find the max and min freq
            for(auto it : freq){
                mini = min(mini, it.second);
                maxi = max(maxi, it.second);
            }
            sum += (maxi-mini);
        }
      } 
      return sum;
    }
};