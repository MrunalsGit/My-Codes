#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,h;
	cin >> n >> h;
	int cnt = 0;

	for (int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		if (temp > h)cnt += 2;
		else cnt++;
	}

	cout << cnt;

}