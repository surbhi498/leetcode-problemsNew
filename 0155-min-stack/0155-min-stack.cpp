#include <stack>
#include <queue>
class MinStack {
public:
    stack<int> st;
    MinStack() {
        
      //  priority_queue<int,vector<int>,greater<int>> df;
    }
    
    void push(int val) {
        st.push(val);
      //  df.push(val);
    }
    
    void pop() {
        st.pop();
        
    }
    
    int top() {
        int yu = st.top();
        return yu;
    }
    
    int getMin() {
        int min1=INT_MAX;
        vector<int> gh1;
        while(!st.empty()){
            int gh = st.top();
            gh1.push_back(gh);
            min1 = min(min1,gh);
            st.pop();    
        }
        reverse(gh1.begin(),gh1.end());
        for(int i=0;i<gh1.size();i++){
            st.push(gh1[i]);
        }
        return min1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */