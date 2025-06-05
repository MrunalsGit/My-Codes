#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;

	while(t--){
		int n,k,x;
		cin >> n >> k >> x;

		if(k <= 1){
			if(x <= 1){
				cout << "NO" << endl;
			}
			else{
				cout << "YES" << endl;
				cout << n << endl;
				while(n--) cout << 1 << " ";
				cout << endl;
			}
		}
		else if (k == 2){
			if (x == 2){
				cout << "YES" << endl;
				cout << n << endl;
				while(n--) cout << 1 << " ";
				cout << endl;
			}
			else {
				if(n%2 == 0){
					int print2 = n/2;
					cout << "YES" << endl;
					cout << print2 << endl;
					while(print2--) cout << 2 << " ";
					cout << endl;
				}
				else cout << "NO" << endl;
			}
		}
		else{
			if(x == 1){
				if(n%2 == 1){
					n = n - 3;
					int print2 = n / 2;
					cout << "YES" << endl;
					cout << print2 + 1 << endl;
					cout << 3 << " ";
					while(print2--) cout << 2 << " ";
					cout << endl;
				}
				else{
					int print2 = n/2;
					cout << "YES" << endl;
					cout << print2  << endl;
					while(print2--) cout << 2 << " ";
					cout << endl;
				}
			}
			else if (x == 2){
				int print3 = n/3;
				int print1 = n%3;
				cout << "YES" << endl;
				cout << print1 + print3  << endl;
				while(print1--) cout << 1 << " ";
				while(print3--) cout << 3 << " ";
				cout << endl;

			}
			else {
				int print2 = n/2;
				int print1 = n%2;
				cout << "YES" << endl;
				cout << print1 + print2  << endl;
				while(print1--) cout << 1 << " ";
				while(print2--) cout << 2 << " ";
				cout << endl;
			}
		}

	}
}
