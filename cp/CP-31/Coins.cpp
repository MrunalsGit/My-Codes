#include <bits/stdc++.h>
using namespace std;

// int ifPoss(int n, int k, int x){
	
// 	int low = 0, high = n;

// 	while(low <= high){
// 		int mid = (low + high)/ 2;
// 		int ans = (2 * x) + (k * mid);

// 		if(ans == n) return 1;
// 		else if (ans > n) high = mid - 1;
// 		else low = mid + 1;

// 	}
// 	return 0;
// }

int main (){
	int t;
	cin >> t;

	while(t--){
		long long n,k;
		cin >> n >> k;
		// int done = 0;

		// for(int i  = 0; i < n; i++){
		// 	int check = ifPoss(n,k,i);

		// 	if(check == 1 ){
		// 		done = 1;
		// 		cout << "Yes\n" ;
		// 		break;
		// 	}
		// }
		// if(done == 0) cout << "No\n";

		if(n % 2 == 1 && k % 2 == 0) cout << "No\n";
		else cout << "Yes\n";

	}
}