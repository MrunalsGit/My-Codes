#include <bits/stdc++.h>
using namespace std;

long long factorial(int n, long long fact = 1 ){
	
	if (n < 1) return fact;

	factorial(n-1, fact*n);
}

int main () {
	
	int n;
	cin >> n;

	cout << factorial(n);
}