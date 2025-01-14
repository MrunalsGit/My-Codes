#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int>& arr, int n){
	for (int i=0; i < n-1; i++){
		int mini = i;
		for (int j=i; j < n; j++){
			if( arr[mini] > arr[j]){
				mini = j;
			}
		}

		int temp = arr[mini];
		arr[mini] = arr[i];
		arr[i] = temp;
	}
}

int main () {
	int n;
	cin >> n;

	vector<int> arr;
	for (int i =0; i < n; i++) {
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	selection_sort(arr,n);

	for (int i =0; i < n; i++) cout << arr[i] << " ";
}