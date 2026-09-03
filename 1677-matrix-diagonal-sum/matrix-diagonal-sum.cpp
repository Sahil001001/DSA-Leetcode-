class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        set<pair<int,int>>s;
        int lastIdx = mat.size()-1;

        for(int i = 0;i<mat.size();i++){
            for(int j = 0;j<mat[0].size();j++){
                if(i==j || (i+j) == lastIdx){
                    s.insert({i,j});
                }

            }
        }
        int result = 0;
        for(auto p : s){
            int x = p.first;
            int y = p.second;
            result+=mat[x][y];
             
        }
        return result;
        
    }
};