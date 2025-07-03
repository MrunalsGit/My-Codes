// Problem: D. Binary String Battle
// Contest: Codeforces - Codeforces Round 1034 (Div. 3)
// URL: https://codeforces.com/contest/2123/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, k; cin >> n >> k;
	string s; cin >> s;
	
	int cnt1 = 0, cnt0 = 0;
	int first1 = -1, last1 = -1;

	for(int i = 0; i < n; i++){	
		if(s[i] == '1'){
			cnt1++;
			if(first1 == -1) first1 = i;
			last1 = i;
		}
		else cnt0++;	
	}
	// cout <<  last1 << " " << first1;
	if(last1 - first1 <= k)cout << "Alice\n";
	else if (k > n/2) cout << "Alice\n";
	else cout << "Bob\n";
	
}

int main (){
	int t; cin >> t;
	while(t--){
		solve();
	}
}