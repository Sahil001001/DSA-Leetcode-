class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>>arr(cols,vector<int>(rows));

        for(int i = 0;i<cols;i++){
            for(int j = 0;j<rows;j++){
                arr[i][j] = matrix[j][i];
            }
        }
        return arr;

    }
};