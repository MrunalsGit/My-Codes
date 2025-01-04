#include <bits/stdc++.h>
using namespace std;

int addDigits(int num) {
	int final = 0;
	while(num > 0){
		int last = num % 10;
		final += last;
		num /= 10;
	}
	return final;
}

int main() {
	
	int num;
	cin >> num;

	cout << addDigits(num);
}