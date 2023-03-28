// https://practice.geeksforgeeks.org/problems/lru-cache/1
// https://leetcode.com/problems/lru-cache/

#include<bits/stdc++.h>
using namespace std;

class LRUCache
{
    private:

    public:
    int cap;
    map<int, int>hsh;
    queue<pair<int, int>>q;
    map<int, int>time_map;
    int time = 0;
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap)
    {
        this->cap = cap;
    }
    
    //Function to return value corresponding to the key.
    int GET(int key)
    {
        // your code here
        
        if(!hsh.count(key)) return -1;
        time++;
        q.push({key, time});
        time_map[key] = time;
        return hsh[key];
    }
    
    //Function for storing key-value pair.
    void SET(int key, int value)
    {
        // your code here
        
        if(hsh.size() == cap and !hsh.count(key)) {
            while(hsh.size() == cap) {
                auto top = q.front(); q.pop();
                if(top.second == time_map[top.first]) {
                    time_map.erase(top.first);
                    hsh.erase(top.first);
                }
            }
        }
        
        time++;
        q.push({key, time});
        time_map[key] = time;
        hsh[key] = value;
    }
};
