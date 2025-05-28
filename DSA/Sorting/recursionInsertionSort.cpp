#include <bits/stdc++.h>
using namespace std;

void recursionInsertionSort (vector <int> &arr, int n = 1){
	
	if(n >= arr.size() ) return;
	int i = n;
	while(i != 0 && arr[i] < arr[i-1]){
		int temp = arr[i];
		arr[i] = arr[i-1];
		arr[i-1] = temp;
		i--;
	}

	recursionInsertionSort(arr, ++n);
	
}

int main () {
	int n;
	cin >> n;

	vector <int> arr;
	for(int i =0; i < n; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	recursionInsertionSort(arr);

	for(auto it : arr) cout << it << " ";
}