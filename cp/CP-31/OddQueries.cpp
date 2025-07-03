// Problem: D. Odd Queries
// Contest: Codeforces - Codeforces Round 859 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1807/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

void solve(){
	 int n, q; cin >> n >> q;
	 vector <long long> arr(n,0), prefixSum(n+1,0);
	 long long sum = 0;
	 
	 for(int i = 0; i < n; i++){
	 	cin >> arr[i];
	 	sum += arr[i];
	 }
	 
	 for(int i =1; i <= n; i++){
	 	prefixSum[i] = prefixSum[i-1] + arr[i-1];
	 }

	for(int i = 0; i < q; i++){
		long long l,r,k; cin >> l >> r >> k;
		
		long long oldSegSum = prefixSum[r] - prefixSum[l-1];
		long long newSegSum = (r-l+1)*k;
		long long newSum = sum - oldSegSum + newSegSum;
		
		if(newSum % 2 == 1)cout << "YES\n";
		else cout << "NO\n";
	}
	 
}

int main (){
	int t; cin >> t;
	while(t--){
		solve();
	}
}