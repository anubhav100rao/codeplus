// https://atcoder.jp/contests/arc087/tasks/arc087_a

#include<bits/stdc++.h>
using namespace std;
 
#define int long long
 
signed main() {
  
  	
	int n; cin >> n;
	vector<int>arr(n);
	for(int &i: arr) cin >> i;
	
	vector<int>fre(*max_element(arr.begin(), arr.end()) + 1, 0);

	for(int i: arr) fre[i]++;

	int res = 0;
	int mx = *max_element(arr.begin(), arr.end());
	for(int i = 0; i <= mx; i++) {
		int a = i;
		int b = fre[i];

		if(b < a) {
			res += b;
		} else {
			res += b - a;
		}
	}

	cout << res;

	cout << res;

}