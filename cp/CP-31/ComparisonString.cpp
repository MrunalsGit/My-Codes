// Problem: B. Comparison String
// Contest: Codeforces - Educational Codeforces Round 149 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1837/B
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	string s; cin >> s;
	
	char prev = s[0];
	int cnt = 1, maxm = 1;
	for(int i = 1; i < n; i++){
		if(s[i] == prev){
			cnt++;
			maxm = max(cnt,maxm);
			
		}
		else cnt = 1;
		prev = s[i];
	} 
	cout << maxm+1 << endl;
}

int main (){
	int t; cin >> t;
	while(t--){
		solve();
	}
}