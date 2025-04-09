#include <bits/stdc++.h>
using namespace std;

int main (){
	
	int a ;
	cin >> a;

	int cnt = 0;
	int b = a;

	while (b > 0){
	
		if(b >= 5){
			cnt += b/5;
			b %= 5;
		}
		else if (b >= 4){
			cnt += 1;
			b %= 4;
		}
		else if (b >= 3){
			b %= 3;
			cnt += 1;
		}
		else if (b >= 2){
			cnt += 1;
			b %= 2;
		}
		else b = 0, cnt += 1;
	}
	cout << cnt;
}