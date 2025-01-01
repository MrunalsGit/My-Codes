#include <bits/stdc++.h>
using namespace std;

bool powOf4(int n, int i = 0){
	
	if (pow(4,i) == n) return true;

	if (i > (pow(n, (0.25)))) return false;

	return powOf4(n, ++i);
}

int main (){
	
	int n;
	cin >> n;

	cout << powOf4(n);

	return 0;
}
