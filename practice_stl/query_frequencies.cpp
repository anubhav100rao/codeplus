#include <bits/stdc++.h>
using namespace std;


signed main() {
    
    int n; cin >> n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    map<int, int>fre;
    for(int i: arr) fre[i]++;

    int q; cin >> q;
    while(q--) {
        int x; cin >> x;
        cout << fre[x] << '\n';
    }
    
    return 0;
}