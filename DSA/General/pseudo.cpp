#include <bits/stdc++.h>
using namespace std;

int recur(int n){
	if (n <= 1) return 1;

	return recur(n) + recur(n-1);
}

int main (){
	int n;
	cin >> n;

	cout <<recur(n);
}