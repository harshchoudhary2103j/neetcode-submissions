class MyHashSet {
public:
    unordered_map<int,int>mpp;
    MyHashSet() {
        
    }
    
    void add(int key) {
        if(mpp.find(key)==mpp.end()){
            mpp[key] = 1;
        }else{
            return;
        }
        
    }
    
    void remove(int key) {
        if(mpp.find(key)!=mpp.end()){
            mpp.erase(key);

        }else{
            return;
        }
        
    }
    
    bool contains(int key) {
         if(mpp.find(key)!=mpp.end()){
            return true;

        }
        return false;
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */