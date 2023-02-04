class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        sort(s1.begin(),s1.end());
        int m = s2.size();
        string gh="";
        for(int i=0;i<=(m-n);i++) {
            gh=+s2[i];
            for(int j=i+1;(j-i+1)<=n;j++) {
            gh+=s2[j];    
            }
           // cout<<gh<<endl;
            sort(gh.begin(),gh.end());
            if(gh==s1) return true;
            gh="";
        }
        return false;
    }
};