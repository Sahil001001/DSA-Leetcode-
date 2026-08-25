class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>mp;
        for(char x : s){
            mp[x]++;
        }

        vector<pair<int,char>>v;
        string ans = "";

        for(auto y : mp){
            v.push_back({y.second,y.first}); 
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());

        for(auto k : v){
            int freq = k.first;
            char ch = k.second;

            while(freq){
                ans+=ch;
                freq--;
            } 
        }
        return ans;

    }
};