class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(auto x : nums){
            mp[x]++;
        }

        float limit = (nums.size()/3);

        for(auto x : mp){
            if(x.second > limit){
                ans.push_back(x.first);
            }
        }
        return ans;
        
    }
};