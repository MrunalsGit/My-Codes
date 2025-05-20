#include <bits/stdc++.h>
using namespace std;

bool armstrongNumber(int n){
	int cnt = int(log10(n)) + 1;
	int sum = 0;
	int x = n;
	while(x > 0){
		int temp = x % 10;
		sum += pow(temp,cnt);
		x /= 10;
	}

	return sum == n;
}

int main (){
	int n;
	cin >> n;

	cout << armstrongNumber(n);
}