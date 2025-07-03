#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int countGoodNumbers(int n, int i = 0, long long ans = 1){
	
	if(i >= n) return ans;
	
	if(i % 2 == 1){
		ans = (ans * 5) % MOD;
		return countGoodNumbers(n,i+1,ans);
	}
	ans = (ans * 4) % MOD;
	return countGoodNumbers(n,i+1,ans);
}

void solve(){
	 int n; cin >> n;
	 cout << countGoodNumbers(n) << endl;
}

int main (){
	int t; cin >> t;
	while(t--){
		solve();
	}
}