class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max_cnt = 0;

        for(int i=0; i<sentences.size(); i++){
            int cnt = 0;
            for(int j=0; j<sentences[i].size(); j++){
                if(sentences[i][j] == ' ')
                   cnt++;
            }
            max_cnt = max(max_cnt, cnt);
        }
        return max_cnt+1;
    }
};