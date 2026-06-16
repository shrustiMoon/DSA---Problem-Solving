class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();     // no. of rows
        int m = matrix[0].size();  // no. of columns
        int low = 0;
        int high = (n*m)-1;
        while(low<=high){
            int mid = (low+high)/2;

            int rows = mid/m;      // row ki value
            int cols = mid%m;     // col ki value
            if(matrix[rows][cols]==target) return true;
            else if(matrix[rows][cols]<target) low = mid+1;
            else high = mid-1;
        }
        return false;
    }
};