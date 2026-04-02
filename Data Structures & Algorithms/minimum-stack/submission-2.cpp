class MinStack {
private:
    stack<long> st;
    long min;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()){
            st.push(0);
            min = val;
        }
        else{
            st.push(val-min);
            if(val<min) min = val;
        }
    }
    
    void pop() {
        if(st.empty()) return;
        long popping = st.top();
        st.pop();
        if(popping < 0) min = min - popping;
    }
    
    int top() {
        long top = st.top();
        return (top > 0) ? (int)(top+min):(int)min;
    }
    
    int getMin() {
        return (int)min;
    }
};
