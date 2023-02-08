class Solution {
public:
    int appendCharacters(string s, string t) {
        int n = s.size();
        int m = t.size();
        int i=0;
        int c=0;
        int tp=0;
        int jk;
        while(i<n) {
            if(s[i]==t[tp]) {
                tp++;
                c++;
            } 
           i++; 
        }
        jk=t.size()-c;
        return jk;
        
    }
};