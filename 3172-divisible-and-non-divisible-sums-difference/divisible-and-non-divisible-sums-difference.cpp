class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sum_nondiv = 0;
        int sum_div = 0;
        for(int i=1; i<=n; i++){
            if(i%m != 0)
               sum_nondiv += i;
            else 
               sum_div += i;   
        }
        return (sum_nondiv - sum_div);
    }
};