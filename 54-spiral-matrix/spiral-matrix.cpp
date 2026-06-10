class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // No. of rows
        int n = matrix.size();
        // No. of columns
        int m = matrix[0].size();

        // 
        vector<int>ans;

        // Initialize Pointers 
        int left = 0;
        int right = m-1;
        int top = 0;
        int bottom = n-1;

        while(top<=bottom && left<=right){

            // Left -> Right
            for(int i=left; i<=right; i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            // Top -> Bottom
            for(int i=top; i<=bottom; i++){
                ans.push_back(matrix[i][right]);
            }
            right--;
            // Right -> Left
            if(top<=bottom){
                for(int i=right; i>=left; i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            // Bottom -> Top
            if(left<=right){
                for(int i=bottom; i>=top; i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};