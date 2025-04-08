#include <bits/stdc++.h>
using namespace std;

int main () {
	
	int a, n;
	cin >> a >> n;

	int b = a;

	for(int i = 0; i < n; i++){
		int temp = b%10;

		if(temp == 0) b /= 10;
		else b -= 1;
	}

	cout << b;
}