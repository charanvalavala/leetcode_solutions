class LRUCache {
    int cap;
    list<pair<int,int>>lista;
    unordered_map<int,list<pair<int,int>>::iterator>map;
public:
    LRUCache(int capacity) {
        cap = capacity;
    }
    
    int get(int key) {
        if(map.find(key)== map.end())
        {
            return -1;
        }
        lista.splice(lista.begin(),lista,map[key]);
        return map[key]->second;
    }
    
    void put(int key, int value) {
        if(map.find(key) != map.end())
        {
            map[key]->second = value;
            lista.splice(lista.begin(),lista,map[key]);
            return;
        }
        if(lista.size() == cap)
        {
            int lkey = lista.back().first;
            lista.pop_back();
            map.erase(lkey);

        }
        lista.push_front({key,value});
        map[key]= lista.begin();
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */