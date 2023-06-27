class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
        stack<char> fg;
        string vb="";
        for(int i=0;i<n;i++){
            if(!fg.empty()){
                if(s[i]==fg.top()){
                    fg.pop();
                    continue;
                }
            }
            fg.push(s[i]);
        }
        while(!fg.empty()){
            vb+=fg.top();
            fg.pop();
        }
        reverse(vb.begin(),vb.end());
        return vb;
    }
};