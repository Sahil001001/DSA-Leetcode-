class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0;
        int h = matrix.size()-1;
        while(l <=h){
            int mid = l+(h-l)/2;
            if(target==matrix[mid][0] || target == matrix[mid][matrix[0].size()-1]) return true;
            else if(target>matrix[mid][0] && target<matrix[mid][matrix[0].size()-1]){
                int low = 0;
                int hi = matrix[0].size()-1;
                while(low<=hi){
                    int m = low+(hi-low)/2;
                    if(matrix[mid][m]==target){
                        return true;
                    }else if(target<matrix[mid][m]){
                        hi=m-1;
                    }else{
                        low = m+1;
                    }
                }
                return false;
            }else if(target<matrix[mid][0]){
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return false;
        
    }
};