// Problem: B. NIT_Destroys_the_Universe
// Contest: Codeforces - Codeforces Global Round 21
// URL: https://codeforces.com/problemset/problem/1696/B
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n; cin >> n;
	
	vector <long long> arr(n,0);
	long long zeroFound = 0;
	long long numFound = 0;
	for(long long i = 0; i < n; i++){
		cin >> arr[i];
		if(arr[i] != 0)numFound = 1;
		if(arr[i] == 0 && numFound == 1 && zeroFound == 0) zeroFound = 1;
		if(arr[i] != 0 && zeroFound == 1) zeroFound = 2;
	}
	
	if(numFound == 0) cout << 0 << endl;
	else if(zeroFound == 2) cout << 2 << endl;
	else cout << 1 << endl;
}

int main (){
	int t; cin >> t;
	while(t--){
		solve();
	}
}