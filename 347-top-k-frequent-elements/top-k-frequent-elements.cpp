class Solution {
public:
  typedef pair<int,int>pi;
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int>mp;
        for(int i = 0;i<nums.size();i++){
          mp[nums[i]]++;        
        }

        priority_queue<pi,vector<pi>,greater<pi>>pq;
        for(auto x : mp){
            int el = x.first;
            int freq = x.second;
            pair<int,int>p = {freq,el};
            pq.push(p);
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int>v;
        while(pq.size()>0){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};