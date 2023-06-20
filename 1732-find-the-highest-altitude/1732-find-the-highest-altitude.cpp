class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> jk(n+1,0);
        jk[0]=0;
        for(int i=0;i<n;i++){
            int cv = gain[i]+jk[i];
            jk[i+1]=cv; 
        }
        int vb = *max_element(jk.begin(),jk.end());
        return vb;
    }
};