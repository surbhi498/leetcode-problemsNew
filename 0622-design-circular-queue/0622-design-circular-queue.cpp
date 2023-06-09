class MyCircularQueue {
public:
    int front=-1;
    int rear=-1;
    int* arr;
    int jk=0;
    MyCircularQueue(int k) {
      arr = new int[k];
      jk=k;  
    }
    
    bool enQueue(int value) {
       if (isFull())
            return false;

        if (isEmpty())
            front = 0;

        rear = (rear + 1) % jk;
        arr[rear] = value;

        return true;
        }    
    
    bool deQueue() {
         if (front==-1)
            return false;

        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % jk;
        }

        return true;

    }
    
    int Front() {
        if(front==-1) return -1;
        int x = arr[front];
        return x;
    }
    
    int Rear() {
       if(rear != -1){
           int vb = arr[rear];
           return vb;
       }
       return -1; 
    }
    
    bool isEmpty() {
      if(front==-1) return true;
      return false;  
    }
    
    bool isFull() {
        return (rear + 1) % jk == front;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */