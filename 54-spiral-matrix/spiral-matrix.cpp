class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>&matrix) {

        vector<int> ans;

        int top = 0;
        int left = 0;
        int right = matrix[0].size() - 1;
        int bottom = matrix.size() - 1;

        while (top <= bottom && left <= right) {

            int i = top;
            int j = left;

            // top
            while (j <= right) {
                ans.push_back(matrix[top][j]);
                j++;
            }

            top++;

            // right
            i = top;

            while (i <= bottom) {
                ans.push_back(matrix[i][right]);
                i++;
            }

            right--;

            // bottom

           
            if(top<=bottom){
                 j = right;
            while (j >= left) {
                ans.push_back(matrix[bottom][j]);
                j--;
            }
             bottom--;
            }
           

            // left
            
            if(left<=right){
                i = bottom;
            while (i >= top) {
                ans.push_back(matrix[i][left]);
                i--;
            }
             left++;
            }

           
        }

        return ans;
    }
};