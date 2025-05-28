#include <bits/stdc++.h>
using namespace std;

int main (){
	
	int t;
	cin >> t;

	for(int i=0; i<t; i++){

		int n;
		cin >> n;

		int a = -1,b = -1;

		double ans = sqrt(n);

		if(floor(ans) == ans){
			a = ans/2;
			b = ans-a;
		}

		if(a == -1) cout << a << endl;
		else cout << a << " " << b << endl;
	}
}