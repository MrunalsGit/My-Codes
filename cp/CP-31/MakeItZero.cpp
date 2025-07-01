// Problem: A. Make It Zero
// Contest: Codeforces - Codeforces Round 896 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1869/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	
	vector <int> arr(n,0);
	for(int i = 0; i < n; i++) cin >> arr[i];
	
	if(n % 2 == 0){
		cout << 2 << "\n";
		cout << 1 << " " << n << "\n";
		cout << 1 << " " << n << "\n";
	}
	else {
		cout << 4 << "\n";
		cout << 1 << " " << n-1 << "\n";
		cout << 1 << " " << n-1 << "\n";
		cout << n-1 << " " << n << "\n";
		cout << n-1 << " " << n << "\n";
	}
}

int main (){
	int t; cin >> t;
	while(t--){
		solve();
	}
}






















