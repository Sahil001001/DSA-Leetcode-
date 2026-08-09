class Solution {
public:
    void sortNums(vector<int>& nums){
    
        int i=0;
        int j = nums.size()-1;
    
        while(i<=j){
          if(nums[i]%2==1 && nums[j]%2==0) 
          {
            swap(nums[i],nums[j]);
            i++;
            j--;
          }
          if(nums[i]%2==1 && nums[j]%2==1){
            j--;
        }
          if(nums[i]%2==0 && nums[j]%2==1){
            i++;
          }
          if(nums[i]%2==0 && nums[j]%2==0){
            i++;
          }
          
        }

    }
    vector<int> sortArrayByParity(vector<int>& nums) {
        if(nums.size()==1){
            return nums;
        }
        sortNums(nums);
        return nums;


    }
};