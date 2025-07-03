// Problem: A. AvtoBus
// Contest: Codeforces - Codeforces Round 791 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1679/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n; cin >> n;
	long long temp = n;
	
	if(n  < 4 || n % 2 == 1) cout << -1 << endl;
	else{
		long long minm = (n/6);
		if(n % 6 != 0) minm++;
		long long maxm = (n/4);
		cout << minm << " " << maxm << endl;
	}  
}

int main (){
	int t; cin >> t;
	while(t--){
		solve();
	}
}