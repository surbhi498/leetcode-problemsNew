class Solution {
public:
    bool isAnagram(string s, string t) {
      vector<int> freq(26,0);
      vector<int> freq1(26,0);
      int n = s.size();
      for(auto jk : s)
      {
      int gh = jk-'a';
      freq[gh]++;

      }  
      for(auto jk1 : t)
      {
      int gh = jk1-'a';
      freq1[gh]++;

      }
      for(int i=0;i<26;i++){
      if(freq[i] != freq1[i])
      {
          return false;
      }    
      }
      return true;
    }
};