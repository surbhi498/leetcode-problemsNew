class Solution {
public:
    string smallestString(string s) {
        int n = s.size();
        string ans=s;
        int m=0;
        while(m < s.size() && s[m] == 'a') m++;
        if(m >= s.size()) { s[s.size()-1] = 'z'; return s; }
        while(m<n && s[m] != 'a') {s[m]--; m++;}
        return s;
    }
};