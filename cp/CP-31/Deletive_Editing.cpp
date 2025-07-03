// Problem: D. Deletive_Editing
// Contest: Codeforces - 2021-2022 ICPC, NERC, Northern Eurasia Onsite (Unrated, Online Mirror, ICPC Rules, Teams Preferred)
// URL: https://codeforces.com/problemset/problem/1666/D
// Memory Limit: 512 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

void solve(){
	string s, t; cin >> s >> t;
	int n = s.length(), n2 = t.length();
	vector <int> arr(26,0);

	for(int i = 0; i < n2; i++){
		int index = t[i] - 'A';
		arr[index]++;
	}
	
	for(int i = n-1; i >= 0; i--){
		int index = s[i] - 'A';
		if(arr[index] <= 0) s[i] = '.';
		else arr[index]--;
	}
	
	string ans = "";
	for(int i = 0; i < n; i++){
		if(s[i] != '.') ans += s[i];
	}
	
	if(ans == t) cout << "YES\n";
	else cout << "NO\n";
}

int main (){
	int t; cin >> t;
	while(t--){
		solve();
	}
}