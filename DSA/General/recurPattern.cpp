#include <bits/stdc++.h>
using namespace std;

void funcR(int n = 1, int i = 1){

	if (n > 4) {


		cout << "* ";

		if(n > 7) return;

		if (i == 1){
			cout << endl;
			if (n == 5)funcR(++n, 2);
			if (n == 6)funcR(++n, 1);

		}
		funcR(n, --i);

	}

	cout << "* ";

	if (i == n) {
		cout << endl;
		if(n == 4) funcR(++n, 3);
		funcR(++n);
	}
	funcR(n, ++i);
}	

int main () {
	
	funcR();
}