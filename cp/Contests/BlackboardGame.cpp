// Problem: A. Blackboard Game
// Contest: Codeforces - Codeforces Round 1034 (Div. 3)
// URL: https://codeforces.com/contest/2123/problem/0
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	
	if(n%4 == 0) cout << "Bob\n";
	else cout << "Alice\n"; 
}

int main (){
	int t; cin >> t;
	while(t--){
		solve();
	}
}