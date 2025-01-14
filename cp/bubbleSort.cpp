#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr, int n){
	
	for (int i =n; i > 0; i--){
		int didSwap = 0;
		for (int j =0; j < i-1; j++){
			if (arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				didSwap = 1;
			}
		}
		if (didSwap == 0) break;
	}
}

int main (){
	
	int n;
	cin >> n;

	vector<int> arr;
	for (int i =0; i < n; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	bubbleSort(arr, n);

	for (int i=0; i < n; i++) cout << arr[i] << " ";
}