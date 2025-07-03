// Problem: B. Permutation Swap
// Contest: Codeforces - Codeforces Round 873 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1828/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

void swapInt(int&a, int&b){
	int temp = a;
	a = b;
	b = temp;
}

#include <bits/stdc++.h>
using namespace std;

int findGcd(int a, int b){
	
	if(b > a) return findGcd(b, a);                         // try without ret
	
	while(a != 0 && b != 0){
		a = a % b;
		swapInt(a,b);								//try without if
	}
	
	return a;
}

void solve(){
	int n; cin >> n;
	vector <int> arr(n,0);
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	} 
	int Gcd = arr[0]-1;
	for(int i = 1; i < n; i++){
		Gcd = findGcd(Gcd, abs(arr[i] - i - 1));
	}
	cout << Gcd << endl;

}

int main (){
	int t; cin >> t;
	while(t--){
		solve();
	}
}