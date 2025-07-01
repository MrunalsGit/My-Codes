// Problem: A. Jellyfish and Undertale
// Contest: Codeforces - Codeforces Round 901 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1875/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long a,b,n; cin >> a >>b >>n;
	long long extras = 0, timer = b;
	while(n--){
		long long temp;
		cin >> temp;
		if(temp >= a-1) {
			extras++;
			timer += a;
		}
		else timer += temp;
	}
	
	cout << timer - extras << endl; 
}

int main (){
	int t; cin >> t;
	while(t--){
		solve();
	}
}