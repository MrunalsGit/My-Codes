#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin >>a >> b;
	int big,small;
	if (a>b) big = a, small = b;
	else big = b, small = a;
	int temp;
	while (true){
		if (big>small) big = big, small = small;
		else temp = big, big = small, small = temp;



		big = big% small;
		if (big == 0) {
			cout << small;
			break;
		}
		if (small == 0){
			cout << big;
		}
	}
}