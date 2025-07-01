// Problem: D. Balanced Round
// Contest: Codeforces - Codeforces Round 886 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1850/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n, k; cin >> n >> k;
	vector <int> arr(n,0);
	for(int i = 0; i < n; i++)cin >> arr[i];
	sort(arr.begin(), arr.end());
	
	// for(auto i : arr) cout << i << " ";
	// cout << endl << k ;
	
	int cnt = 0, maxm = 0;
	for(int i = 0; i < n; i++){
		if(i == 0){
			cnt = 1;
			maxm = 1;
			continue;
		}
		if(arr[i] - arr[i-1] <= k){
			cnt++;
			maxm = max(cnt,maxm);
		}
		else cnt = 1;
	}
	cout << n-maxm << endl;
}

int main (){
	int t; cin >> t;
	while(t--){
		solve();
	}
}