class MyQueue {
public:

    stack<int> s1;
    stack<int> s2;

    MyQueue() {
        
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
            cout << "Thisshould have been called";
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
    if (s1.empty())
        cout<<"s1 is empty"<<endl;
    if (s2.empty())
        cout<<"s2 is empty"<<endl;
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