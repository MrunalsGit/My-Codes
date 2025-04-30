#include <bits/stdc++.h>
using namespace std;

int main (){
	long long n;
	cin >> n;

	long long odd;

	if (n % 2 == 0) odd = n/2;
	else odd = (n/2)+1;

	long long even = n/2;

	cout << odd << endl << even << endl;

	cout << odd*odd << endl;
	cout << (even*(even+1)) << endl;

	// cout << -(odd*odd) + (even*(even+1));
}