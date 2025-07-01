#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;

	while(t--){
		int n, x;
		cin >> n >> x;
		int check = 0;
		int find = -1;
		int ans = 1;

		for(int i = 0; i < n; i++){
			int temp;
			cin >> temp;
			if(check ==  0 && temp ==  1){
				check = 1;
				find = i + x;
			}

			if(check == 1 && i >= find){
				if (temp == 1){
					ans = 0;
				}
			}
		}

		if(ans) cout << "Yes\n";
		else cout << "No\n";


	}
}


// YES
// NO
// YES
// YES
// NO
// YES
// NO
