#include <bits/stdc++.h>
using namespace std;

int main (){
	int n;
	cin >> n;
	int minm = INT_MAX;

	while(n--){
		int temp;
		cin >> temp;

		minm = min(minm, abs(temp));
	}

	cout << minm;
}