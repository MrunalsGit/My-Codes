// Problem: B. Tournament
// Contest: Codeforces - Codeforces Round 1034 (Div. 3)
// URL: https://codeforces.com/contest/2123/problem/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, j, k; cin >> n >> j >> k;
	
	vector <int> arr(n,0);
	int maxm = 0;
	for(int i = 0; i <n; i++){
		cin >> arr[i];
		maxm = max(arr[i], maxm);
	}

	if(arr[j-1] != maxm && k == 1) cout << "NO\n";
	else cout << "YES\n";
}

int main (){
	int t; cin >> t;
	while(t--){
		solve();
	}
}