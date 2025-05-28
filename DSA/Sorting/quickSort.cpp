#include <bits/stdc++.h>
using namespace std;

void quick_Sort(vector<int> &arr, int low, int high){
	
	if(low>= high) return;

	int i = low;
	int j = high;
	int pivot = arr[low];

	while(i<j){
		while(pivot >= arr[i]){
			if(i < high)i++;
			else break;
		}

		while(pivot <= arr[j]){
			if(j > low)j--;
			else break;
		}

		if(i < j)swap(arr[i],arr[j]);  // if condition if add for example this cond. arr = {4,1,5,6,7,8,9}
	}
	swap(arr[low],arr[j]);

	quick_Sort(arr,low,j-1);
	quick_Sort(arr,j+1,high);
}

int main(){
	int n;
	cin >> n;

	vector<int> arr;

	for(int i =0; i < n; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	quick_Sort(arr,0,n-1);

	for(auto i : arr){
		cout << i << endl;
	}
}