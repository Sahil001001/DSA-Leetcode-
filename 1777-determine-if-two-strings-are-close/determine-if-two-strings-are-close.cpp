class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.length()!=word2.length()) return false;
        unordered_map<char,int>mp1,mp2;

        for(int i=0;i<word1.size();i++){
            mp1[word1[i]]++;
            mp2[word2[i]]++;
        }
        
        for(auto x: mp1){
            char ch = x.first;
            if(mp2.find(ch)==mp2.end()) return false;
        }

        unordered_map<int,int>h1,h2;
        for(auto x : mp1){

            int freq = x.second;
            h1[freq]++;
        }
        for(auto x : mp2){
            int freq = x.second;
            h2[freq]++;
        }

        for(auto x : h1){
            int key = x.first;
            if(h2.find(key)==h2.end()) return false;
            if(h1[key]!=h2[key]) return false;
        }
        return true;

    }
};