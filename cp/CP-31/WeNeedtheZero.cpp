#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		int ans = 0;

		for(int i = 0; i < n; i++){
			int temp;
			cin >> temp;
			ans ^= temp;
		}

		if(n % 2 == 0){
			if(ans == 0) cout << "45\n";
			else cout << "-1\n";
		}
		else {
			cout << ans << endl;
		}

	}
}