class Solution {
public:
    typedef pair<int,int>pi;
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

       vector<int>ans;
       priority_queue<pi>pq;

       for(int i = 0;i<arr.size();i++){
         int diff = abs(x-arr[i]);
          pair<int,int>p = {diff,arr[i]};
          pq.push(p);
          if(pq.size()>k){
            pq.pop();
          }
       }
       while(pq.size()>0){
           ans.push_back(pq.top().second);
           pq.pop();
       }
       sort(ans.begin(),ans.end());
       return ans;

    }
};