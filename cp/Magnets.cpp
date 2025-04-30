#include <bits/stdc++.h>
using namespace std;

int main (){
	int n;
	cin >> n;

	int f;
	cin >> f;
	int cnt = 1;

	int prev = f;

	for(int i = 1 ; i < n; i++){
		int temp;
		cin >> temp;
		if(temp != prev) cnt++;
		prev = temp;
	}
	cout << cnt;
}