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
    vector<int>arr(n);
    for(int &i: arr) cin >> i;
    int q; cin >> q;
    while(q--) {
        int x; cin >> x;
        int left = 0, right = n - 1, res = -1;
        while(right - left >= 0) {
            int mid = left + (right - left) / 2;
            if(arr[mid] >= x) {
                res = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        int idx = lower_bound(arr.begin(), arr.end(), x) - arr.begin();

        cout << res << "\n";
    }

    return 0;
}