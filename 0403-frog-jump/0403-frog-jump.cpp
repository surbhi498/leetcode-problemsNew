class Solution {
public:
    bool solve1(int i, vector<int>& stones, int n, int gh, vector<vector<int>>& jk)
    {
      if(jk[i][gh] != -1) return jk[i][gh];
      if(i==(n-1)) return true;
       for(int t=i+1;t<n;t++)
       {
                   
                    int fg = abs(stones[t]-stones[i]);
                    
                    if(fg==(gh)){
                        
                        if (solve1(t, stones, n, fg,jk)){
                           jk[i][fg]=1; 
                          return true;   
                        }
                       
                    }
                    if(fg==(gh+1)){
                         if (solve1(t, stones, n, fg, jk)){
                         jk[i][fg]=1;    
                         return true;
                         }    
                    }
                    if(fg==(gh-1)){
                        
                     if (solve1(t, stones, n, fg, jk)){
                     jk[i][fg]=1;    
                     return true;
                     }    
                    }
     }
               
              
    return jk[i][gh]=(i==(n-1))?1:0;
        
        
    }    
    bool canCross(vector<int>& stones) {
        int n=stones.size();
        int gh=0;
        vector<vector<int>> jk(n,vector<int>(n,-1));
        return solve1(0,stones,n,gh,jk);
    }
};