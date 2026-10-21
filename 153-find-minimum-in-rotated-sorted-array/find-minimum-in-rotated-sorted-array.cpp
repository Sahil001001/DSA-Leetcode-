class Solution {
public:
    int findMin(vector<int>& nums) {
        for(int i = 0;i<nums.size();i++){
            int num;
            if(i <nums.size()-1){
                num = nums[i+1];
            }
           
            if(num<nums[i]){
                return num;
            }
        }
        return nums[0];
        
    }
};