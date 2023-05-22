class Solution {
public:
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
    void dfs(int start,string& s,vector<vector<string>>& result, vector<string>& currentlist, vector<vector<int>>& dp){
        if(start>=s.size()) result.push_back(currentlist);
        for(int end=start;end<s.size();end++){
            string gh = s.substr(start,end-start+1);
            if(s[start]==s[end] && (end-start<=2 || dp[start+1][end-1])){
                dp[start][end]=1;
                  currentlist.push_back(gh);
                dfs(end+1,s,result,currentlist,dp);
                currentlist.pop_back();
            }
            
            
            
        }
       // return result;
    }
    vector<vector<string>> partition(string s) {
        int n = s.size();
        vector<vector<string>>result;
        vector<string> currentlist;
        vector<vector<int>> dp(n,vector<int>(n,-0));
        dfs(0,s,result,currentlist,dp);
        
        return result;
    }
};