#include <queue>
class KthLargest {
public:
    priority_queue<int,vector<int>,greater<int>> pq;
    int gh;
    KthLargest(int k, vector<int>& nums) {
        gh=k;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
    }
    
    int add(int val) {
        
        int county=0;
        pq.push(val);
        while((pq.size())>gh){
          
           pq.pop();
           
        }
        if(!pq.empty()){
         county = pq.top();
           
        }
        return county;
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */