class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        map<char,int> mp;
        int odd=0;
        int count=0;
        for(char c : s){
            mp[c]++;
        }
        for(auto gh : mp){
            int yu = gh.second;
            if(yu%2==0){
                count+=yu;
            }
            else{
                count+=(yu-1);
                odd=1;
            }
        }
        if(odd)
        count+=1;
        return count;
    }
};