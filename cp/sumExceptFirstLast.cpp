#include <bits/stdc++.h>
using namespace std;

int sumExceptFirstLast (int[] arr){
	int size = arr.size()/arr[0];
	int sum=0;
	for (int i =1; i ; size-2; i++){
		sum += arr[i];
	}
	return sum;
}

int main(){
	int n;
	cin >> n;

	int arr[6];

	for (int i =0; i < n; i++){
		int temp;
		cin >> temp;
		arr[i] = temp;
	}

	cout << sumExceptFirstLast(arr);
}