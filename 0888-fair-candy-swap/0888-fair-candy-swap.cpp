class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        vector<int> mg;
        int sum1=0;
        int sum2=0;
        map<int,int> mp;
        for(auto jk : aliceSizes){
            sum1+=jk;
        }
        for(auto jk : bobSizes){
            sum2+=jk;
            mp[jk]++;
        }
        int diff = (sum2-sum1)/2;
        for(auto x : aliceSizes){
            int gh = x+diff;
            if(mp.count(gh)>0){
                mg.push_back(x);
                mg.push_back(gh);
                break;
                
            }
        }
        return mg;
    }
};