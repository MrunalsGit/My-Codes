// Problem: A. Mainak_and_Array
// Contest: Codeforces - Codeforces Round 819 (Div. 1 + Div. 2) and Grimoire of Code Annual Contest 2022
// URL: https://codeforces.com/problemset/problem/1726/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n; cin >> n;
	vector <long long> arr(n,0);
	for(int i = 0; i < n; i++) cin >> arr[i];
	
	long long ans = arr[n-1]- arr[0];
	
	for(int i = 1; i < n; i++) ans = max(ans, arr[i] - arr[0] );
	
	for(int i = 0; i < n-1; i++) ans = max(ans, arr[n-1] - arr[i]);
	
	for(int i = 0; i < n-1; i++) ans = max(ans, arr[i] - arr[i+1]);
	
	cout << ans << endl;
	
}

int main (){
	int t; cin >> t;
	while(t--){
		solve();
	}
}