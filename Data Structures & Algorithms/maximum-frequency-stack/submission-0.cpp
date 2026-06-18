class FreqStack {
public:
    priority_queue<vector<int>>pq;
    int index;
    unordered_map<int,int>freq;

    FreqStack() {
        index = 0;
    }
    
    void push(int val) {
        freq[val]++;
        pq.push({freq[val], index, val});
        index++;
        
    }
    
    int pop() {
        auto top = pq.top();
        pq.pop();
        int ele = top[2];
        freq[ele]--;
        return ele;
        
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */