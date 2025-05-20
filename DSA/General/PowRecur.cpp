#include <bits/stdc++.h>
using namespace std;

double myPow(double x, int n, double ans = 1) {
        
    if (n == 0 ) return ans;
    if (n>0) ans  = ans*x;
    if (n<0) ans = ans * (1/x);
    if(n < 0) n++;
    if (n > 0) n--;
    return myPow(x, n, ans);
}

int main () {
	
	double x;
	int n;
	cin >> x >> n;

	cout << myPow(x, n);
}
