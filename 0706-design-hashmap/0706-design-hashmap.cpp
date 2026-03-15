class MyHashMap {
private:
    vector<pair<int, int>> v;

public:
    MyHashMap() {}
    
    void put(int key, int value) {
        for (auto& it : v) {
            if (it.first == key) {
                it.second = value; 
                return;            
            }
        }
        v.push_back({key, value});
    }
    
    int get(int key) {
        for (auto& it : v) {
            if (it.first == key) {
                return it.second;
            }
        }
        return -1; 
    }
    
    void remove(int key) {
        for (auto it = v.begin(); it != v.end(); ++it) {
            if (it->first == key) {
                v.erase(it); 
                return;      
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */