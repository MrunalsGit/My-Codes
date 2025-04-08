#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int a, b;
	cin >> a >> b;
	int cnt = 0;

	while (true){
		a *= 3;
		b *= 2;
		cnt += 1;

		if(a > b)break;
	}

	cout << cnt;
}