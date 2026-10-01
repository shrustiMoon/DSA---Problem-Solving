class Solution {
public:
    int minPartitions(string n) {
        int max_num = 0;
        for(int i=0; i<n.size(); i++){
            max_num = max(max_num, n[i]-'0');
        }
        return max_num;
    }
};