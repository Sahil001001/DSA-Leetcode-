class Solution {
public:
    string decodeString(string s) {
        stack<int>nums;
        stack<string>str;
        string ans = "";

       
        for(int i = 0;i<s.length();i++){
            if(isdigit(s[i])){
                int digit = 0;
                while(i<s.length() && isdigit(s[i]))
                { 
                digit = digit * 10 + s[i]-'0';
                i++;
                }
                nums.push(digit);
                i--;
            }
            else if(s[i] == ']'){
                string temp = "";
                while(str.top()!="["){
                    temp = str.top()+temp;
                    str.pop();
                }
                str.pop();
                int n =nums.top();
                nums.pop();
                string t = "";
                for(int i = 1;i<=n;i++){
                    t+=temp;
                }
                str.push(t);
               
            }
            else{
                str.push(string(1,s[i]));
            }
        }
        while(!str.empty()){

            ans = str.top()+ans;
            str.pop();
        }
        
        return ans;

    }
};