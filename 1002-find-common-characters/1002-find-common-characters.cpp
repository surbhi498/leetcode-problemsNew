class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        int n = words.size();
        map<char, vector<int>> mp;
        vector<string> jk;
        for(auto hj : words){
            string gh = hj;
            map<char, int> xc;
            for(int i=0;i<gh.size();i++){
               xc[gh[i]]++;
             }
            for(auto it : xc){
                mp[it.first].push_back(it.second);
            }
            xc.clear();
        }
        for(auto it : mp){
            vector<int> op = it.second;
            if(op.size()>=n){
                int cv = *min_element(op.begin(),op.end());
               // cout<<cv<<endl;
                while(cv>0){
                    char c= it.first;
                    string xc = string(1,c);
                    jk.push_back(xc);
                    cv--;
                }
            }
        }
        return jk;
    }
};