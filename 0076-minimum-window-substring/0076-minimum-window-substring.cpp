class Solution {
public:
    string minWindow(string s, string t) {
        int m = s.size();
        int n = t.size();
        if(m==0 || n==0) return "";
        map<char,int> mp1;
        map<char,int> mp2;
        int left=0;
        int right=0;
        int ans = INT_MAX;
        for(int i=0;i<n;i++){
            mp1[t[i]]++;
        }
        int required = mp1.size();
        int formed=0;
        int desl=0;
        int desr=0;
        int len =0;
        while(right<m){
           char c = s[right];
           mp2[c]++;
           if((mp1.find(c) != mp1.end()) && (mp2[c]==mp1[c])){
               formed++;
           } 
          while((left<=right) && (formed==required)){
              char vb = s[left];
              int gh = right-left+1;
              if(gh<=ans){
                  ans=gh;
                  desl=left;
                  desr=right;
                  len = desr-desl+1;
              }
              mp2[vb]--;
              if(mp2[vb]==0){
                  mp2.erase(vb);
              }
              if((mp1.find(vb) != mp1.end()) && (mp2[vb]<mp1[vb])){
                  formed--;
              }
              left++;
              
          }  
            right++;
        }
        string mk = s.substr(desl,len);
        return mk;
    }
};