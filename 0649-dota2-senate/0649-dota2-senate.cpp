class Solution {
public:
    void ban(vector<int> &indices, int start_at, vector<int>& banned)
    {
        
        auto temp = lower_bound(indices.begin(), indices.end(), start_at);
        if(temp==indices.end()){
            banned[indices[0]]=1;
            indices.erase(indices.begin());
        }
        else{
            banned[*temp]=1;
            indices.erase(temp);
        }
        
        
    }    
    string predictPartyVictory(string senate) {
        int n = senate.size();
        vector<int> rindices;
        vector<int> dindices;
        vector<int> banned(n,0);
        int turn=0;
        for(int i=0;i<n;i++){
            if(senate[i]=='R'){
                rindices.push_back(i);
            }
            else{
                dindices.push_back(i);
            }
        }
        while(!rindices.empty() && !dindices.empty()){
         if(!banned[turn]){
             if(senate[turn]=='R'){
                 ban(dindices,turn, banned);
             }
             else{
                 ban(rindices,turn, banned);
             }
         }   
            turn = (turn+1)%n;
        }
        if(dindices.empty()) return "Radiant";
        else
        return "Dire";    
    }
};