#include <bits/stdc++.h>
using namespace std;

vector <int> nextPermutation(vector <int> &arr){
	int index = INT_MAX;
	int n = arr.size();
	for(int i = n - 2; i >= 0; i--){
		if (arr[i] < arr[i+1]) {
			index = i;
			break;
		}
	}

	if (index == INT_MAX) { 
		reverse(arr.begin(), arr.end());
		return arr;
	}

	for(int i = n-1; i > index; i--){
		if (arr[i] > arr[index]){
 			swap (arr[i], arr[index]);
			break;
		}
	}

	reverse(arr.begin() + index + 1 , arr.end());
	return arr;
}

int main () {
	int n;
	cin >> n;

	vector <int> arr;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}
	vector <int> ans;
	ans = nextPermutation(arr);

	for (auto it : ans) cout << it << " ";
}