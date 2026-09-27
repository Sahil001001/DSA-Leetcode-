class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int hi = nums.size()-1;
        int mid = -1;
        while(low<=hi){
            mid = low+(hi-low)/2;
            if(target == nums[mid]){
                return mid;
            }else if(target < nums[mid]){
                hi = mid-1;
            }else{
                low=mid+1;
            }

        }
        if(nums[mid]<target){
            return mid+1;
        }else{
            return mid;
        }
        
    }
};