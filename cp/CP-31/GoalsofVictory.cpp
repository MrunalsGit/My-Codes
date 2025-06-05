#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;

	while(t--){

		int n;
		cin >> n;

		int sum = 0;

		while(--n){
			int temp;
			cin >> temp;
			sum += temp;
		}
		cout << sum*-1 << endl;
	}
}