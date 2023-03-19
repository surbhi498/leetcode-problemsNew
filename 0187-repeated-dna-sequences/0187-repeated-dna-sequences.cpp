class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        int n = s.size();
        int left=0;
        int right=0;
        vector<string> jk;
        map<string,int> mp;
        string mg="";
        while(right<n){
            //mg+=s[right];
            
            int vb = right-left+1;
            while(vb>10){
                left++;
                vb = right-left+1;
            }
            
            mg=s.substr(left,vb);
            if(mg.size()==10)
            mp[mg]++;
            right++;
            
        }
        for(auto bn : mp){
            string cv = bn.first;
            int op = bn.second;
            if(op>1)
            jk.push_back(cv);
        }
        return jk;
    }
};