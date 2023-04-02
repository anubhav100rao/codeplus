// https://atcoder.jp/contests/arc087/tasks/arc087_a

#include<bits/stdc++.h>
using namespace std;
 
#define int long long
 
signed main() {
	int n; cin >> n;
  	map<int, int>fre;
  	for(int i = 0, x = 0; i < n; i++) {
    	cin >> x;
      	fre[x]++;
    }
  
  	int res = 0;
  	for(auto [a, b]: fre) {
    	if(b < a) res += b;
      	else res += b - a;
    }
  
  	cout << res;
 
}