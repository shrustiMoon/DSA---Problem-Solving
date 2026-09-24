class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>>people;
        vector<string>ans;

        // Create the pairs and store in vector
        for(int i=0; i<names.size(); i++){
            people.push_back({heights[i], names[i]});
        }
        // Sort in Descending order
        sort(people.rbegin(), people.rend());

        for(auto it : people){
            ans.push_back(it.second);
        }
        return ans;
    }
};