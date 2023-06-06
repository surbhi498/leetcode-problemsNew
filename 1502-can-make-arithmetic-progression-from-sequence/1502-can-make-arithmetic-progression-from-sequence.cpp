class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(),arr.end());
        map<int,int> mp;
        for(int i=0;i<(n-1);i++){
           int diff = abs(arr[i+1]-arr[i]);
           mp[diff]++;
        }
        if(mp.size()==1) return true;
        return false;
    }
};