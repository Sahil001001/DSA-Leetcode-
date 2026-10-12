class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx = INT_MIN;
        if(nums.size()<2) return nums[0];
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            sum +=nums[i];
            mx = max(mx,sum);
            if(sum <0){
                sum = 0;

            }
    
            
        }
        return mx;
        
    }
};