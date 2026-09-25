class Solution {
public:

    void merge(vector<int>&nums,int st,int mid,int end){
        vector<int>temp;
        int i=st;
        int j = mid+1;

        while(i<=mid && j<=end){
            if(nums[i]<=nums[j]){
                temp.push_back(nums[i]);
                i++;
            }else{
                temp.push_back(nums[j]);
                j++;
            }
        }
        if(i<=mid){
            while(i<=mid){
                temp.push_back(nums[i]);
                i++;
            }
        }
        if(j<=end){
            while(j<=end){
                temp.push_back(nums[j]);
                j++;
            }
        }

        for(int i = 0;i<temp.size();i++){
            nums[st+i] = temp[i];
        }
    }
    void mergeSort(vector<int>&nums,int st,int end){
        if(st==end)  return;
        int mid = st + (end-st)/2;
        mergeSort(nums,st,mid);
        mergeSort(nums,mid+1,end);

        merge(nums,st,mid,end);

    }
    vector<int> sortArray(vector<int>& nums) {
        int start = 0;
        int end = nums.size()-1;
        mergeSort(nums,start,end);
        return nums;


        
    }
};