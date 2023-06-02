#include <deque>
class MyStack {
public:
   
    deque<int> q1;
  
    MyStack() {
        
    }
    
    void push(int x) {
       q1.push_back(x);
       
    }
    
    int pop() {
        int cv;
        if(!q1.empty()){
         cv = q1.back();
         q1.pop_back();   
            
        }
        return cv;
    }
    
    int top() {
        int yu;
        if(!q1.empty()){
            yu=q1.back();
        }
        return yu;
    }
    
    bool empty() {
        if(q1.empty()){
            return true;
        }
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */