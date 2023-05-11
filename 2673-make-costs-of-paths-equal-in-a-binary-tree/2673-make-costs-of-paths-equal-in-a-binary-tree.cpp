class Solution {
public:
    int ans=0;
    int dfs(int n, int currentnode, vector<int>& cost)
    {
       
       if(currentnode > n) return 0;
       int x = dfs(n,2*currentnode, cost);
       int y = dfs(n,2*currentnode+1,cost);
       ans+=abs(x-y);
       return max(x,y)+cost[currentnode-1]; 
    }    
    int minIncrements(int n, vector<int>& cost) {
        int vb = dfs(n,1,cost);
        return ans;
    }
};