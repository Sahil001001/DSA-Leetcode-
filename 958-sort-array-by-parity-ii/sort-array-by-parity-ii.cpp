class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int i =  0;
        int n = nums.size();
        vector<int>ans(n);
         for(int x : nums){
            if(x%2==0){
                ans[i]=x;
                 i+=2;
            }
          
         }
         i=1;
         for(int x : nums){
            if(x%2==1){
                ans[i]=x;
                i+=2;
            }
            
         }
         return ans;
    }
};