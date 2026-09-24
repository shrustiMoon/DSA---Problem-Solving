class Solution {
public:
    int digitFrequencyScore(int n) {
        map<int, int>mpp;

        while(n>0){
            int ld = n % 10;
            mpp[ld]++;
            n = n / 10;
        }
        int score = 0;
        for(auto it : mpp){
            score = score + (it.first * it.second);
        }
        return score;
    }
};