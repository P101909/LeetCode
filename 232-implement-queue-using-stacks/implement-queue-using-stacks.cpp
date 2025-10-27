class MyQueue {
public:

    stack<int> s1;
    stack<int> s2;

    MyQueue() {
        // Basically Juggle between the two stacks
        // At any time, one of the stacks will be empty and the other will be our main stack
        // which acts as the queue

        // If a new element is pushed to the queue, pop everything from the non empty stack and puah them
        // into the empty stack
        // Then push the new element to the empty stack
        // pop everything from the other stack and push them into the stack with the new element

    }
    
    void push(int x) {
        int temp = 0;
        if (this->empty()) {
            s1.push(x);
            return;
        }
        
        if (s1.empty()) {
            while (!s2.empty()) {
                temp = s2.top();
                s2.pop();
                s1.push(temp);
            }
            s2.push(x);
            while (!s1.empty()) {
                temp = s1.top();
                s1.pop();
                s2.push(temp);
            }
        }
        if (s2.empty()) {
            while (!s1.empty()) {
                temp = s1.top();
                s1.pop();
                s2.push(temp);
            }
            s1.push(x);
            while (!s2.empty()) {
                temp = s2.top();
                s2.pop();
                s1.push(temp);
            }
        }
    }
    
    int pop() {
        int temp = 0;
        if (s1.empty()) {
            temp = s2.top();
            s2.pop();
        }
        else {
            temp = s1.top();
            s1.pop();
        }
        return temp;
    }
    
    int peek() {
    int temp = 0;
        if (s1.empty()) 
            temp = s2.top();
        else
            temp = s1.top();
        return temp;
    }
    
    bool empty() {
      return (s1.empty() && s2.empty());  
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