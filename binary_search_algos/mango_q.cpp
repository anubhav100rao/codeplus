#include <bits/stdc++.h>
using namespace std;
#define dbg(x) cerr<<#x<<" = "<<x<<endl

signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE 
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        freopen("error.txt", "w", stderr);
    #endif
    int n; cin >> n;
    vector<long long>arr(n);
    for(long long &i: arr) cin >> i;
    sort(arr.rbegin(), arr.rend());
    for(int i = 1; i < n; i++) arr[i] += arr[i - 1];
    int q; cin >> q;
    while(q--) {
        long long x; cin >> x;
        int idx = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
        if(idx == n) {
            cout << "-1\n";
        } else {
            cout << idx + 1 << "\n";
        }
    }
    return 0;
}