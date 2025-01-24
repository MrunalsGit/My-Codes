#include <bits/stdc++.h>
using namespace std;

int intPow (int base, int power){
	int res = 1;
	for (int i =0; i < power; i++){
		res = res*base;
	}
	return res;
}

bool isArmstrong(int n){
	
	int num = n;
	int sum = 0;

	int count = int(log10(abs(n)) + 1);

	while (num > 0){
		int unitPlace = num % 10;
		sum = sum + (intPow(unitPlace,count));
		num /= 10;
	}

	if (sum == n) return 1;
	return 0;

}

int main (){
	int n;
	cin >> n;

	cout << isArmstrong(n);
}