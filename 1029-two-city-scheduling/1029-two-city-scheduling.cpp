class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int n = costs.size();
        int countA=0;
        int countB=0;
        int i=0;
        int j=0;
        int costy=0;
        vector<pair<int,int>> yu;
        for(auto jk : costs){
            int xc = jk[1]-jk[0];
            yu.push_back({xc,i});
            i++;
        }
        sort(yu.begin(),yu.end());
        for(int i=0;i<(n);i++){
            if(i<(n/2))
            costy+=costs[yu[i].second][1];
            else
             costy+=costs[yu[i].second][0];   
        }
        return costy;
        
    }
};