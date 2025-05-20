#include <bits/stdc++.h>
using namespace std;

int secLargest(vector <int> arr){
	int largest = arr[0];
	int secLargest = INT_MIN;

	for(int i =1; i < arr.size(); i++){
		if (arr[i] > largest){
			secLargest = largest;
			largest = arr[i];
		}

		else if (arr[i] > secLargest && arr[i] < largest)secLargest = max(secLargest, arr[i]);
	}
	return secLargest;
}

int main () {
	int n ;
	cin >> n;

	vector <int> arr;
	for (int i =0; i < n; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	cout << secLargest(arr);
}