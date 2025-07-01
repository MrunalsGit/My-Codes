#include <bits/stdc++.h>
using namespace std;

double pow(double x, long n){
	
	if(n == 0) return 1;
	
	if(n % 2 == 0){

		return pow(x*x, n/2);
	}
	else {
		return x * pow(x, n-1);
	}
}

double myPow(double x, long n){
	if(n < 0) return 1/pow(x, -1*n);
	return pow(x,n);
}

void solve(){
	double x;
	long n; 
	cin >> x >> n;
	
	cout << myPow(x,n); 
}

int main (){
	int t; cin >> t;
	while(t--){
		solve();
	}
}