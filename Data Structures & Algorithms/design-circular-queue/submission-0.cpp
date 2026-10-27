class MyCircularQueue {
private:
    vector<int> vec;
    int write_ptr;
    int read_ptr;
    int count;
public:
    MyCircularQueue(int k) {
        write_ptr = 0;
        read_ptr = 0;
        vec.resize(k);
        count = 0;
    }
    
    bool enQueue(int value) {
        if (isFull()) return false;
        vec[write_ptr] = value;
        count++;
        write_ptr++;
        write_ptr = write_ptr % vec.size();
        return true;
    }
    
    bool deQueue() {
        if (isEmpty()) return false;
        count--;
        read_ptr++;
        read_ptr %= vec.size();
        return true;
    }
    
    int Front() {
        if (isEmpty()){return -1;}
        return vec[read_ptr];
    }
    
    int Rear() {
        if (isEmpty()){return -1;}
        if (write_ptr - 1 == -1) return vec[vec.size()-1];
        return vec[(write_ptr - 1) % vec.size()];
    }
    
    bool isEmpty() {
        return (count == 0);
    }
    
    bool isFull() {
        return (count == vec.size());
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