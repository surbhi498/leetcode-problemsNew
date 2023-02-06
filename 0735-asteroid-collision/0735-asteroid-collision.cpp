class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        stack<int> st;
        bool push = true;
        int peek;
        int new1;
        vector<int> kl;
        for(auto gh : asteroids) {
            push=true;
            while(!st.empty() && (gh<0 && st.top()>0)) {
                     peek = st.top();
                     new1 = gh;
                    if(abs(peek)>abs(new1)){
                        // do nothing;
                        push=false;
                        break;
                    }
                    else if(abs(peek)==abs(new1)) {
                        st.pop();
                        push=false;
                        break;
                    }
                   else if(abs(peek)<abs(new1)) {
                       st.pop();
                       push=true;
                   }
               
               
             
                }
               if(push == true){
                   //st.pop();
                   st.push(gh);
               }
             
        //    st.push(gh);
        }
        while(!st.empty()) {
            int cv = st.top();
            st.pop();
            kl.push_back(cv);
        }
        reverse(kl.begin(),kl.end());
        return kl;
    }
};