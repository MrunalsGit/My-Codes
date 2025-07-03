// Problem: B. Make_It_Increasing
// Contest: Codeforces - Codeforces Round 787 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1675/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

void solve(){
	long long n; cin >> n;
	vector <long long> arr(n,0);
	int check = 1;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		if(i!= 0){
			if(arr[i] <= arr[i-1]) check = 0; 
		}
	}
	if(check) cout << 0 << endl;
	else{
		long long cnt = 0;
		int notPos = 0;
		for(int i = n-2; i >= 0; i--){
			if(arr[i+1] < i+1) {
				// cout << 1 << " " << i << endl;
				notPos = 1;
				break;
			}
			while(arr[i+1] <= arr[i]  && arr[i] ){
				arr[i] /= 2;
				cnt++;
				if(arr[i] < i) {
					// cout << 2 << " " << i  << endl;
					notPos = 1;
					break;
				}
			}
			
		}
		if(arr[0] >= arr[1]){
			notPos = 1;
			// cout << 3 << " " << i  << endl;
		}
		
		if(notPos) cout << -1 << endl;
		else cout << cnt << endl;
	}
}

int main (){
	int t; cin >> t;
	while(t--){
		solve();
	}
}