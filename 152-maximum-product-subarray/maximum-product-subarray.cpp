class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx = INT_MIN;
        int n = nums.size();
        int suffix = 1;
        int prefix = 1;
        for(int i = 0;i<nums.size();i++){
            prefix*=nums[i];
            suffix*=nums[n-i-1];

            mx =max(mx,max(prefix,suffix));
            if(nums[i] == 0 ){
                prefix = 1;
                }
            if(nums[n-i-1] == 0 ){
                suffix = 1;
            }
            
        } 
        return mx;

        
    }
};