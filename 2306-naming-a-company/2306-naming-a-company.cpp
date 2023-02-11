class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
     vector<int> hj(26,0);
     int n = ideas.size();
     unordered_map<string,int> mp;
     long long ans=0;   
     for(int i=0;i<n;i++) {
         int in = ideas[i][0]-'a';
         hj[in]=1;
         mp[ideas[i]]=1;
     }   
     vector<vector<int>> dict(26,vector<int>(26,0));
     for(int i=0;i<n;i++) {
         int yu = ideas[i][0]-'a';
         string res = ideas[i].substr(1);
         for(int j=0;j<26;j++) {
             if(hj[j]==1 && j != yu) {
                 char ch = j+'a';
                 string jk = ch+res;
                 if(mp.count(jk)==0)
                 dict[yu][j]++; 
             }
         }
     } 
     for(int i=0;i<26;i++)
     for(int j=0;j<26;j++) {
         ans+=dict[i][j]*dict[j][i];
     }    
     return ans;   
    }
};