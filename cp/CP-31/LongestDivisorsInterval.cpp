// Problem: B. Longest Divisors Interval
// Contest: Codeforces - Codeforces Round 889 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1855/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n; cin >> n;
	int cnt = 0;
	
	for(int i = 1; i<= n; i++){
		if(n % i == 0)cnt++;
		else break;
	}
	cout << cnt << "\n";
}

int main (){
	int t; cin >> t;
	while(t--){
		solve();
	}
}