#include <bits/stdc++.h>
using namespace std;

int reverseNum(int x){

	if (x == INT_MAX || x == INT_MIN) return 0;

	int num = abs(x);
	int revNum = 0;

	while (num > 0){
		int unitPlace = num%10;
		if (revNum > INT_MAX/10) return 0;
		revNum = (revNum*10) + unitPlace;
		num /= 10;
	}
	if (x < 0) return -revNum;
	return revNum;
}

int main (){
	int n;
	cin >> n;

	cout << reverseNum(n);
}