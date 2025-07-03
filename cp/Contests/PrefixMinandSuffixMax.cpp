// Problem: C. Prefix Min and Suffix Max
// Contest: Codeforces - Codeforces Round 1034 (Div. 3)
// URL: https://codeforces.com/contest/2123/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	vector <int> arr(n,0);
	int maxm = 0, minm = INT_MAX;
	
	for(int i = 0; i< n; i++){
		cin >> arr[i];
	}
	
	vector <int> ans(n,0);

	for(int i = 0; i < n; i++){
		int front = arr[i];
		int back = arr[n-i-1];
		
		if(front <= minm){
			ans[i] = 1;
			minm = front;
		}
		if(back >= maxm){
			ans[n-1-i] = 1;
			maxm = back;
		}
	}
	
	string s = "";
	for(auto i : ans){
		if(i == 1) s += '1';
		else s += '0';
	}
	cout << s << endl;

	
}

int main (){
	int t; cin >> t;
	while(t--){
		solve();
	}
}