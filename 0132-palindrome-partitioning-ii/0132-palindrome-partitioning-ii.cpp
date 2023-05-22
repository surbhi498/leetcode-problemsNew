class Solution {
public:
 int min1=INT_MAX;  
bool ispalindrome(string& s)
    {
        int start=0;
        int end=s.size()-1;
        while(start<=end){
            if(s[start] != s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }   
    void dfs(int start,string& s,vector<vector<string>>& result, vector<string>& currentlist, vector<vector<int>>& dp,vector<int>& cut){
        if(start>=s.size()) {
            return;
          //  result.push_back(currentlist);
         //   int gh = currentlist.size();
          //  min1=min(min1,gh);
        }
        for(int end=0;end<s.size();end++){
         //   string gh = s.substr(start,end-start+1);
            int minimumcut = end;
            for(int start=0;start<=end;start++) {
            if(s[start]==s[end] && (end-start<=2 || dp[start+1][end-1])){
                dp[start][end]=1;
                minimumcut = start==0?0:min(minimumcut,cut[start-1]+1);
               
                //currentlist.push_back(gh);
             //   dfs(end+1,s,result,currentlist,dp,cut);
                //currentlist.pop_back();
            }
            
            } 
            
        }
       // return result;
}
    

    int minCut(string s) {
         int n = s.size();
        vector<vector<string>>result;
        vector<string> currentlist;
        vector<vector<int>> dp(n,vector<int>(n,0));
        vector<int> cut(n,-1);
         for(int end=0;end<s.size();end++){
         //   string gh = s.substr(start,end-start+1);
            int minimumcut = end;
            for(int start=0;start<=end;start++) {
            if(s[start]==s[end] && (end-start<=2 || dp[start+1][end-1])){
                dp[start][end]=1;
                minimumcut = start==0?0:min(minimumcut,cut[start-1]+1);
               
                //currentlist.push_back(gh);
             //   dfs(end+1,s,result,currentlist,dp,cut);
                //currentlist.pop_back();
            }
            
            } 
           cut[end]=minimumcut; 
        }
        return cut[n-1];
    }
};