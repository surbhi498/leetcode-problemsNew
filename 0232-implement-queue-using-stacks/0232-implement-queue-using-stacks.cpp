#include<stack>
class MyQueue {
public:
    stack<int> st;
    stack<int> mg;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(!mg.empty()){
            while(!mg.empty()){
                int vb = mg.top();
                st.push(vb);
                mg.pop();
            }
        }
        st.push(x);
    }
    
    int pop() {
        int bn;
        if(!st.empty()){
            while(!st.empty()){
                int cv = st.top();
                mg.push(cv);
                st.pop();
            }
            }
            if(!mg.empty()){
                bn = mg.top();
                mg.pop();
            }
        return bn;
        
    }
    
    int peek() {
        int yu;
        if(!st.empty()){
            while(!st.empty()){
                int cv = st.top();
                mg.push(cv);
                st.pop();
            }
            }
        if(!mg.empty())
        yu = mg.top();
        return yu;
    }
    
    bool empty() {
        if(mg.empty() && st.empty())
        return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */