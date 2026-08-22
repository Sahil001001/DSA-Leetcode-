class MedianFinder {
public:
    priority_queue<int,vector<int>,greater<int>>left;
    priority_queue<int>right;
    void addNum(int num) {
        if(right.size()==0 || num<right.top())  right.push(num);
        else{
            left.push(num);
        }
        int diff = (int)right.size()-(int)left.size();
        if((abs(diff)==2)){
            if(right.size()>left.size()){
                left.push(right.top());
                right.pop();
            }
            else{
                right.push(left.top());
                left.pop();
            }
        }
    }
    double findMedian() {
        if(right.size() !=left.size()){
            if(right.size() > left.size()) return right.top();
            else return left.top();
        }
        else{
            return (right.top()+left.top())/2.0;  
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */