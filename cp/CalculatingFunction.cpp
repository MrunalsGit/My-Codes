#include <bits/stdc++.h>
using namespace std;

int main (){
	long long n,odd,even;
	cin >> n;


	if (n % 2 == 0) odd = n/2;
	else odd = (n/2)+1;

	even = n/2;

	cout << -(odd*odd) + (even*(even+1));
}