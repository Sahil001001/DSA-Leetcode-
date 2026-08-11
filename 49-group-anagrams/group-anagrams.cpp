class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>ans;
        for(string str : strs){
            string el = str;
            sort(str.begin(),str.end());
            mp[str].push_back(el);
        }
        for(auto x : mp){
            ans.push_back(x.second);

        }
        return ans;
    }
};