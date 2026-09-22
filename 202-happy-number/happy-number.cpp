class Solution {
public:
    bool isHappy(int n) {
        int sum=0;
        unordered_set<int>st;
        while(sum!=1){
            while(n > 0){
                sum += (n%10)*(n%10);
                n = n/10;
            }
            if(sum==1) return true;
            else if(st.find(sum)!=st.end()) {
                return false;
            }
            else{
                st.insert(sum);
            }
            n = sum;
            sum=0;
        }
        return true;
        
        
    }
};