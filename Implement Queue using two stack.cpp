// Implement Queue using two stack.

class MyQueue {
public:
    stack<int>input, output;
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        int x;
        if(!output.empty()){
            x= output.top();
            output.pop();
            return x;
        }
        else{
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            x = output.top();
            output.pop();
            return x;
        }
        
    }
    
    int peek() {
        int x;
        if(!output.empty()){
            return  output.top();
        }
        else{
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            return output.top();
        }
       
    }
    
    bool empty() {
        if(input.empty() && output.empty()){
            return 1;
        }
        return 0;
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