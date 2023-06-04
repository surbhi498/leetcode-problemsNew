class Solution {
public:
    int len(string s, unordered_map<string,int>& mp, int index, vector<int>& dp){
        string gh="";
        int min1=INT_MAX;
        if(index>=s.size()) return 0;
        if(dp[index] != -1) return dp[index];
        for(int m=index;m<s.size();m++){
            gh.push_back(s[m]);
            int currchars;
            if(mp.count(gh)>0)
            currchars=0;
            else
            currchars=gh.size();
            int extrachars = len(s,mp,m+1,dp);
            int totalchars = currchars+extrachars;
            min1 = min(min1,totalchars);
            
                
        }
       return dp[index]=min1;
       // return min1;
    }
    int minExtraChar(string s, vector<string>& dictionary) {
        unordered_map<string, int> mp;
        int n = s.size();
        vector<int> dp(n,-1);
        for(auto gh : dictionary){
            mp[gh]++;
        }
        return len(s,mp,0,dp);
    }
};