#include <queue>
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
       int n = stones.size();
       if(n==1) return stones[0];
        priority_queue<int> pq;
        int ans=0;
        for(int i=0;i<n;i++)
        pq.push(stones[i]);
        while(!pq.empty()){
            int gh = pq.top();
            pq.pop();
            int yu = pq.top();
            pq.pop();
            pq.push(abs(gh-yu));
            if(pq.size()==1){
                ans=pq.top();
                pq.pop();
            }
            
        }
        return ans;
    }
};