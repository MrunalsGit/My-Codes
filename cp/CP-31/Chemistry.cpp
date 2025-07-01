// Problem: B. Chemistry
// Contest: Codeforces - Codeforces Round 905 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1883/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, k; cin >> n >> k;
	string s; cin >> s;
	unordered_map <char, int> mpp;
	 
	for(int i = 0; i < n; i++){
	 	mpp[s[i]]++;
	}
	int odd = 0;
	
	for(auto i : mpp){
		if(i.second % 2 == 1)odd++;
	} 
	
	if(k+1 >= odd || k == 0 && odd == 1) cout << "YES\n";
	else cout << "NO\n";
}

int main (){
	int t; cin >> t;
	while(t--){
		solve();
	}
}