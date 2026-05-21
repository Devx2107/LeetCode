// Last updated: 21/05/2026, 18:11:58
class MyQueue {
    int front;
    int rear;
    int arr[101];
public:
    MyQueue() {
        front = 0;
        rear = 0;
    }
    
    void push(int x) {
        arr[rear++] = x;
    }
    
    int pop() {
        int res = arr[front];
        front++;
        return res;
    }
    
    int peek() {
        return arr[front];
    }
    
    bool empty() {
        return front == rear;
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