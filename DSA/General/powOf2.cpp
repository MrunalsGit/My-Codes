#include <bits/stdc++.h>
using namespace std;

bool powOf2(int n, int i = 0){
	
	if (pow(2,i) == n) return true;

    if (i > sqrt(n)) return false;
	
	return powOf2(n, ++i);

}

int main (){
	
	int n;
	cin >> n;

	cout << powOf2(n);

	return 0;
}


