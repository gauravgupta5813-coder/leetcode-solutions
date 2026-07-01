class CustomStack {
private:
    vector<int> stack;
    int maxCapacity;

public:
    CustomStack(int maxSize) {
        maxCapacity = maxSize;
    }
    
    void push(int x) {
        if (stack.size() < maxCapacity) {
            stack.push_back(x);
        }
    }
    
    int pop() {
        if (stack.empty()) return -1;
        int topValue = stack.back();
        stack.pop_back();
        return topValue;
    }
    
    void increment(int k, int val) {
        int limit = min(k, (int)stack.size());
        for (int i = 0; i < limit; i++) {
            stack[i] += val;
        }
    }
};