class Solution {
public:
    int numberOfSubstrings(string s) {
        int m = s.size();
        int left=0;
        int right=0;
        int ans=0;
        int count=0;
        map<char,int> mp;
        while(right<m){
            mp[s[right]]++;
            while(left<=right && mp.size()==3){
                count++;
                mp[s[left]]--;
                if(mp[s[left]]==0){
                    mp.erase(s[left]);
                }
                left++;
               
            }
            ans+=left;
            right++;
        }
        return ans;
    }
};