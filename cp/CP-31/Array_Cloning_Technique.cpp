// Problem: B. Array_Cloning_Technique
// Contest: Codeforces - Codeforces Round 781 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1665/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n; cin >> n;
	vector<int> arr(n,0);
	int mult = 0;
	
	for(long long i = 0; i < n; i++){
		cin >> arr[i];
		if(i != 0 && arr[i] != arr[i-1]) mult = 1;
	}
	if(mult == 0) cout << 0 << endl;
	else{
		map <long long, long long> mpp;
		long long maxFreq = 0;
		for(int i = 0; i < n; i++) mpp[arr[i]]++;
		for(auto i : mpp) maxFreq = max(maxFreq, i.second);
		
		int cnt = 0;
		int cap = maxFreq;						// Count of max occuring num
		if(maxFreq < n){
			cnt++;								// First copy
			for(int i = 0; i < cap; i++){
				if(maxFreq >= n)break;
				cnt++;
				maxFreq++;
			}
		}
		
		while(maxFreq < n){
			cnt++;
			cap = (2*cap < n) ? (2*cap) : n;
			for(int i = 0; i < cap; i++){
				if(maxFreq >= n)break;
				cnt++;
				maxFreq++;
			}	
		}
		
		cout << cnt << endl;
		
	}
}

int main (){
	long long t; cin >> t;
	while(t--){
		solve();
	}
}