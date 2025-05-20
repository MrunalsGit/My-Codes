#include <bits/stdc++.h>
using namespace std;

long long factorial(long long n, long long fact = 1 ){
	
	if (n < 1) return fact;

	return factorial(n-1, fact*n);
}

vector <long long> factorialNumbers(long long n , long long i = 1){

	
	if(n <1) return {};
	if(factorial(i) > n) return {};

	vector <long long> ans = factorialNumbers(n, ++i);

	ans.insert(ans.begin(),factorial(i-1));

	return ans;
}

int main (  ) {
	
	long long n;
	cin >> n;

	vector <long long> ans;

	ans = factorialNumbers(n);

	cout << endl << "Ans = " << endl;

	for(auto it:ans) cout << it << " ";
} 