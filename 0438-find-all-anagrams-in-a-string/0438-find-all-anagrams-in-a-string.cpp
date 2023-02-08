class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
     int n = s.size();
     int m = p.size();
      if(m>n) return {};  
     vector<int> output;   
     map<char,int> pattern;
     map<char,int> hj;
     for(int i=0;i<m;i++) {
         pattern[p[i]-'a']++;
     }
    for(int i=0;i<n;i++) {
        hj[s[i]-'a']++;
        if(i>=m) {
            if(hj[s[i-m]-'a']==1) hj.erase(s[i-m]-'a');
        
        else {
            hj[s[i-m]-'a']--;
        }
    }    
        if(pattern == hj) output.push_back(i-m+1);
      }
       return output;   
    }
};