#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;

	while(t--){
		int x,k;
		cin >> x >> k;

		float check = float(x)/k;

		if(check != x/k) cout << 1 << endl << x << endl;
		else {
			cout << 2 << endl << x-1 << " \n" << 1 << endl;
		}


	}
}