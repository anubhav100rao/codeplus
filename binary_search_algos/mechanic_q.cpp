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
    
    int n, cars; cin >> n >> cars;
    vector<int>mechanics(n);
    for(int &i: mechanics) cin >> i;

    long long left = 0, right = 1e17, res = 1e17;

    while(right - left >= 0) {
        long long mid = left + (right - left) / 2;

        int curr_cars = 0;
        for(int i = 0; i < n; i++) {
            curr_cars += floor(sqrtl(mid / mechanics[i]));
        }

        if(curr_cars >= cars) {
            res = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << res << "\n";

    return 0;
}