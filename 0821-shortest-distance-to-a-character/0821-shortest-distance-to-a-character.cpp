class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> gh;
        vector<int> mg;
        for(int i=0;i<n;i++)
        {
            if(s[i]==c){
                gh.push_back(i);
            }
        } 
       int op = gh.size();
        for(int j=0;j<n;j++){
            int fg = lower_bound(gh.begin(),gh.end(),j)-gh.begin();
           // cout<<fg<<endl;
            //if(fg != n)
            if(fg < op && gh[fg]==j){
            mg.push_back(abs(gh[fg]-j));
            }    
            else if(fg < op && gh[fg]>j){
            if(fg>0){    
            int min1 = min(abs(gh[fg]-j), abs(gh[fg-1]-j));
            mg.push_back(min1);    
            }
            else if(fg==0)
            mg.push_back(abs(gh[fg]-j));    
            
            } 
            else if(fg==op){
                mg.push_back(abs(gh[fg-1]-j));
            }
        }
        return mg;
    }
};