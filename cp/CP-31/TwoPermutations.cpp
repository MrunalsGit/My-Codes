#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;

	while(t--){
		int n,a,b;
		cin >> n >> a >> b;
		int check = 0;

		if(n == a && a == b ) check = 1;
		else if ((n - 3) < 1 ) check = 0;
		else{
			if ( a >= 1 && a <= (n-3)){
				if ((a + b) <= (n - 2)) {
					check = 1;
				}
			}
		}

		if (check ) cout << "Yes\n";
		else cout << "No\n";
	}
}