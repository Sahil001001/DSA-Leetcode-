class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        vector<int> pre;
        unordered_map<int,int> mp;
        int i = 0;
        int sum = 0;
        while (i < nums.size()) {
            sum += nums[i];
            pre.push_back(sum);
            i++;
        }
        for (int i = 0; i < pre.size(); i++) {
           if(pre[i]==k){
            count++;
           }
           int rem=pre[i]-k;
           if(mp.find(rem)!=mp.end()){
            count+=mp[rem];
           }
           mp[pre[i]]++;


         }
        return count;
    }
};