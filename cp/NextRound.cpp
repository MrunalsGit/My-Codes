#include <bits/stdc++.h>
using namespace std;

int main (){
	
	int n, k;
	cin >> n >> k;

	vector <int> arr;

	for (int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	int cnt = 0;

	for (int i = 0; i < n; i++){
		if (arr[i] > 0 && arr[i] >= arr[k-1]) cnt += 1;
	}

	cout << cnt;
}