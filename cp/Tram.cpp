#include <bits/stdc++.h>
using namespace std;

int main (){
	int n;
	cin >> n;

	int m = INT_MIN;
	int cap = 0;

	for (int i = 0; i < n; i++){
		int a,b;
		cin >> a >> b;
		cap -= a;
		cap += b;
		m = max(m,cap);
	}

	cout << m;
}