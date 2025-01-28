#include <bits/stdc++.h>
using namespace std;

void recursionBubbleSort(vector <int> &arr, int n = 0){

	if ( n >= arr.size() )return;

	int didSort = 0;

	for (int i =0; i < arr.size() -1; i++){
		if(arr[i] > arr[i+1]){
			int temp = arr[i];
			arr[i] = arr[i+1];
			arr[i+1] = temp;
			didSort = 1;
		}
	}

	if (didSort == 0) return;

	recursionBubbleSort(arr, ++n);
	

	return;


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

	recursionBubbleSort(arr);

	for (auto it : arr) cout << it << " ";
}