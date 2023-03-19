class Solution {
public:
    int characterReplacement(string s, int k) {
        int m = s.size();
        int left=0;
        int right=0;
        map<char,int> mp;
        int windowsize=0;
        int maxfreq=0;
        int longestsub=INT_MIN;
        while((right<m)){
            mp[s[right]]++;
            windowsize=right-left+1;
           
            for(auto gh : mp){
                int op = gh.second;
                if(op>maxfreq){
                    maxfreq=op;
                }
            }
            int yu=windowsize-maxfreq;
            while(yu>k){
                mp[s[left]]--;
                left++;
              windowsize=right-left+1;
                yu=windowsize-maxfreq;
            }
            windowsize=right-left+1;
             if(longestsub<windowsize){
                longestsub=windowsize;
            }
            right++;
            
        }
        return longestsub;
    }
};