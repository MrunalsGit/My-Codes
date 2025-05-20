#include <bits/stdc++.h>
using namespace std;

int evenlyDivides(int n) {
    int num = n;
    int count = 0;
    while(num > 0){
        int unitPlace = num%10;

        if(unitPlace != 0  && n % unitPlace == 0  )  count += 1;
        num /= 10;
    }
    return count;
}

int main (){
	int n;
	cin >> n;

	cout << evenlyDivides(n);
}