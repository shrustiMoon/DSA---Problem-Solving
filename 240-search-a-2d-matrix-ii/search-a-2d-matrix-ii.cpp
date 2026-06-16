class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();      // no. of rows
        int m = matrix[0].size();   // no. of columns

        int row = 0;      // start of 1st row
        int col = m-1;    // start of last column (required corner)

        while(row<n && col>=0){
            if(matrix[row][col]==target) return true;
            else if(matrix[row][col]<target) {
                row++;    // Move down to next row
            }
            else{
                col--;   // Move left to previous column
            }
        }
        return false;
    } 
};