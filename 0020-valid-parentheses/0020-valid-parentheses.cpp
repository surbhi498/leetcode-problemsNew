class Solution {
public:
    bool isValid(string s) {
        int m = s.size();
        stack<char> st;
        int i=0;
        char ch;
        while(i<m){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            if(s[i]==')'){
                if(!st.empty())
                ch = st.top();
                else
                return false;    
                if(ch != '('){
                    return false;
                }
                else{
                    st.pop();
                }
            }
            if(s[i]=='}'){
                if(!st.empty())
                ch = st.top();
                else
                return false;
               // char ch = st.top();
                if(ch != '{'){
                    return false;
                }
                else{
                    st.pop();
                }
            }
            if(s[i]==']'){
                if(!st.empty())
                ch = st.top();
                else
                return false;
                 //ch = st.top();
                if(ch != '['){
                    return false;
                }
                else{
                    st.pop();
                }
            }
            i++;
        }
        if(!st.empty()){
            return false;
        }
        return true;
    }
};