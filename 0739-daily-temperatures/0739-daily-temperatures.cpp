class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<int> st;
        vector<int> vb(n);
        for(int i=0;i<n;i++){
            
                int jk = temperatures[i];
                int count=0;
                while(!st.empty() && (temperatures[st.top()]<jk)){
                    vb[st.top()]=i-st.top();
                    st.pop();
                }
                //vb.push_back(abs(i));
            
            st.push(i);
        }
        return vb;
    }
};