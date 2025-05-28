#include <bits/stdc++.h>
using namespace std;

bool checkIfSortrdArray(vector <int> &arr){

	for(int i = 1; i < arr.size(); i++){
		if(arr[i-1] > arr[i]) return 0;
	}

	return 1;
}

int main (){
	int n;
	cin >> n;

	vector <int> arr;

	for(int i =0; i < n; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	cout << checkIfSortrdArray(arr);
}