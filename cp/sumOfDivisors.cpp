#include <bits/stdc++.h>
using namespace std;

int sumOfDivisors(int n){

	int sum = 0;
	
	for (int j =1; j <= n; j++){
		for (int i =1; i*i <= j; i++){
			if (j%i == 0){
				sum += i;
				if (j/i != i) sum += j/i;
			}
		}
	}

	return sum;

}

int main(){
	int n;
	cin >> n;

	cout << sumOfDivisors(n);
}
