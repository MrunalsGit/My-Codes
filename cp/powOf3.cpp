#include <bits/stdc++.h>
using namespace std;

bool powOf3(int n, int i = 0){
	
	if (pow(3,i) == n) return true;

	if (i > cbrt(n)) return false;

	return powOf3(n, ++i);

}

int main (){
	
	int n;
	cin >> n;

	cout << powOf3(n);

	return 0;
}


