#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		if(n == 3){
			cout << 4 << endl;
			cout << 2 << " " << 1 << " " << 3 << endl;
			cout << 2 << " " << 2 << " " << 3 << endl;
			cout << 3 << " " << 1 << " " << 2 << endl;
			cout << 3 << " " << 2 << " " << 3 << endl;
		}
		else if(n == 4){
			cout << 5 << endl;
			cout << 2 << " " << 1 << " " << 4 << endl;
			cout << 3 << " " << 1 << " " << 3 << endl;
			cout << 3 << " " << 2 << " " << 4 << endl;
			cout << 4 << " " << 3 << " " << 4 << endl;
			cout << 4 << " " << 1 << " " << 2 << endl;

		}
		else{
		int arr[n][n] = {0};		

		int i = 2;
		int l = 1;
		int limit = n;
		int j = limit;
		int cntDown = 2*n;

		cout << 2*n << endl;

		while(cntDown--){

			// reverse(arr[i]+l, arr[i]+j );
			cout << i << " " << l << " " << j << endl;

			l++;
			j++;

			if(i == n && l == n) break;

			if(j > n ){
				i++;
				l = 1;
				limit--;
				j = limit;
			}

			

		}
	}

	}
}

// 2 1 4
// 3 1 3
// 3 2 4
// 4 3 4
// 4 1 2