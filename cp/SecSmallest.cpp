#include <bits/stdc++.h>
using namespace std;

int secSmallest(vector<int> &arr){
	int smallest = arr[0];
	int n = arr.size();
	int sSmallest = INT_MAX;

	for (int i = 1; i < n; i++){
		if (arr[i] < smallest ){
			sSmallest = smallest;
			smallest = arr[i];
		}
		if (arr[i] > smallest && arr[i] < sSmallest){
			sSmallest = arr[i];
		}

	}
	return sSmallest;

}

int main() {
	
	int n;
	cin >> n;

	vector <int> arr;
	for (int i=0; i < n; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	cout << secSmallest(arr);
}
