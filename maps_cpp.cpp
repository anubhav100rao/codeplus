#include <bits/stdc++.h>
using namespace std;


signed main() {
    
    map<int, int>m;
    

    vector<int>arr = {1, 2, 2, 4, 5, 6, 2, 2, 1};

    for(int i: arr)
        m[i]++;
    
    for(auto [a, b]: m) {
        cout << a << " " << b << "\n";
    }

    return 0;
}