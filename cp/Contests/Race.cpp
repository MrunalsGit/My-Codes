// Problem: A. Race
// Contest: Codeforces - Educational Codeforces Round 180 (Rated for Div. 2)
// URL: https://codeforces.com/contest/2112/problem/0
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;
	
	while(t--){
		int a,x,y;
		cin >> a >> x >> y;
		int found = 0;
		int b = 1;
		for(int b = 1; b < 101; b++){
			if(  (  abs(x-b) < abs(x-a)  ) && (  abs(y-b) < abs(y-a) ) ){
				found = 1;
				break;
			}
		}
		if(found) cout << "YES\n";
		else cout << "NO\n";
	}
}