class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n = heights.size();
        int farthest;
        priority_queue <int, vector<int>, greater<int>> pq;
        int i=0;
        for(i=0;i<(n-1);i++){
            int diff = heights[i]-heights[i+1];
            if(diff>=0) continue;
            
            if(ladders>0){
                pq.push(abs(diff));
                ladders--;
            }
            else{
            pq.push(abs(diff));    
            int gh = pq.top();
            pq.pop();    
            if(abs(gh) <= bricks){    
            bricks = bricks-gh;
            }    
            else
            {
            break;    
            }    
            }
            // if(bricks<0 && ladders ==0){
            //         return i;
            //     }
            }
           
        return i;
    }
};