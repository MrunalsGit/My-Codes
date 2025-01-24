#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x){
	if (x < 0) return 0;

	int n = x;
	int rev = 0;

	while (n > 0){
		int unitPlace = n%10;
		if (rev > INT_MAX/10) return 0;
		rev = (rev*10) + unitPlace;
		n /= 10;
	}

	if (rev == x) return 1;
	return 0;
}

int main(){
	int x;
	cin >> x;

	cout << isPalindrome( x);
}