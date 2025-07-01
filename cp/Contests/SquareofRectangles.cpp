// Problem: A. Square of Rectangles
// Contest: Codeforces - Codeforces Round 1033 (Div. 2) and CodeNite 2025
// URL: https://codeforces.com/contest/2120/problem/0
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 

#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;
	
	while(t--){
		int a, b, c, d, e ,f;
		cin >> a >> b >> c >> d >> e >> f;
		
		int sum = a+ b+c+d+e+f;

		if      (a + c + e == b && b == d && b == f)cout << "YES\n";
		else if (b + d + f == a && a == c && a == e)cout << "YES\n";

		else if (a + c == b && b == d + f && a + e == b)cout << "YES\n";
		else if (b + f == a && a == d + b && a == c + e)cout << "YES\n";

		else cout << "NO\n";
		
	}
}

