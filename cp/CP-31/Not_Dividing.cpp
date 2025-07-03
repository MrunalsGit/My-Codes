// Problem: B. Not_Dividing
// Contest: Codeforces - Codeforces Round 856 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1794/B
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	vector <int> arr(n,0);
	for(int i =0; i < n; i++)cin >> arr[i];
	int cnt = 0;
	
	 
	for(int i = 0; i < n-1; i++){
		if(arr[i+1] % arr[i] != 0) continue;
		else if (arr[i] == 1){
			cnt++;
			arr[i] += 1;
			while(arr[i+1] % arr[i] == 0){
				cnt++;
				arr[i+1] += 1;
			}
		}
		else{
			while(arr[i+1] % arr[i] == 0){
				cnt++;
				arr[i+1] += 1;
			}
		}
		if(i != 0 && (arr[i] % arr[i-1] == 0) ) i -= 2;
	}
	
	for(auto i : arr) cout << i << " ";
	cout <<endl;
}

int main (){
	int t; cin >> t;
	while(t--){
		solve();
	}
}