#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr, int n){
	
	for (int i =1; i < n; i ++){
		for (int j = i; j > 0; j--){
			if (arr[j] < arr[j-1]){
				int temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
			else break;
		}
	}
}

int main(){
	
	int n;
	cin >> n;

	vector<int> arr;
	for (int i=0; i < n; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	} 

	insertionSort(arr, n);

	for(int i =0; i < n; i++) cout << arr[i] << " ";
}