#include <bits/stdc++.h>
using namespace std;

int main (){
	
	int x;
	cin >> x;

	while (true){
		if (x % 10 == 0){
			x /= 10;
		}
		else break;
	}
	cout << x;
}