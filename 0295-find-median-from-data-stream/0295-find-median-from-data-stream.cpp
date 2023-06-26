class MedianFinder {
public:
    priority_queue<int> lo; // maxheap
    priority_queue<int,vector<int>, greater<int>> hi; // minheap
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        lo.push(num);
        hi.push(lo.top());
        lo.pop();
        if(lo.size()<hi.size()){
            lo.push(hi.top());
            hi.pop();
        }
    }
    
    double findMedian() {
        if(lo.size()>hi.size()) return lo.top();
        else{
            return (double)((lo.top()+hi.top())*0.5);
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */