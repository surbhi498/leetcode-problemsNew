#include<stack>
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n = s.size();
        int m = t.size();
        stack<char> kl;
        stack<char> mg;
        string bn="";
        string cv="";
        for(int i=0;i<n;i++){
            if(s[i]=='#'){
              if(!kl.empty())
                kl.pop();
               continue;   
            }
            kl.push(s[i]);
        }
        for(int i=0;i<m;i++){
            if(t[i]=='#'){
                if(!mg.empty())
                mg.pop();
                continue;
              }
               
            mg.push(t[i]);
        }
        while(!kl.empty()){
            bn+=kl.top();
            kl.pop();
        }
        while(!mg.empty()){
            cv+=mg.top();
            mg.pop();
        }
        cout<<bn<<" "<<cv<<endl;
        if(bn==cv) return true;
        return false;
    }
};