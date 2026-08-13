class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int>v;
        for(int i=0;i<arr.size();i++){
            v.push_back(((arr[i]%k)+k)%k);
        }
        unordered_map<int,int>mp;
        for(int i=0;i<v.size();i++){
            mp[v[i]]++;
        }
        if(mp.find(0)!=mp.end()){
            if(mp[0]%2!=0) return false;
            mp.erase(0);
        }
        for(auto x : mp){
            int el = x.first;
            int num = k-el;

            if(mp.find(num)==mp.end()){
                return false;
            }
            if(mp[el]!=mp[num]) return false;

        }
        return true;

    }
};