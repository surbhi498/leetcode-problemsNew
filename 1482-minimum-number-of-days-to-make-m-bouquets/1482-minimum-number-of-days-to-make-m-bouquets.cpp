class Solution {
public:
    int check(vector<int>& bloomDay, int mid, int m, int k, int n, vector<int>& visited)
    {
        int count=0;
        int consecutive=0;
        int cv=0;
        for (int i = 0; i < n; i++) {
            if (bloomDay[i] <= mid) {
                consecutive++;
                if (consecutive == k) {
                    cv++;
                    consecutive = 0;
                }
            } else {
                consecutive = 0;
            }
            
            if (cv == m) {
                return cv;
            }
        }
        
        return cv;
   
        
        
        
    }    
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        int min1 = *min_element(bloomDay.begin(), bloomDay.end());
        int max1 = *max_element(bloomDay.begin(), bloomDay.end());
        int low = min1;
        int high = max1;
        vector<int> visited(n,0);
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            visited.clear();
            int op = check(bloomDay, mid, m, k, n, visited);
//             if(op==m)
//             {
//              return mid;   
                
//             }    
            if(op>=m)
            {
                high=mid-1;
                
            }    
            else if(op<m){
                low = mid+1;
            }
            
        }     
        return low<=max1 ? low : -1;
    }
};