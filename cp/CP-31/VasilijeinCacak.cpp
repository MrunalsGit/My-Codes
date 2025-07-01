// Problem: C. Vasilije in Cacak
// Contest: Codeforces - Codeforces Round 900 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1878/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n,k,x;
	cin >> n >> k >> x;
	
	long long minm = (k*(k+1))/2;
	long long maxm = (n*k) - (k*(k-1))/2;
	
	if(x >= minm && x <= maxm)cout << "YES\n";
	else cout << "NO\n"; 
}

int main (){
	int t; cin >> t;
	while(t--){
		solve();
	}
}

