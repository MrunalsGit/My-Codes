#include <bits/stdc++.h>
using namespace std;

vector <int> frequencyCount (vector <int> &arr){
	int n = arr.size();
	vector <int> ret(n+1);
	for(int i =0; i < n; i++){
		ret[arr[i]] += 1;
	}
	ret.erase(ret.begin());

	return ret;
}

int main () {
	int n;
	cin >> n;

	vector <int> arr,arr1;

	for (int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	arr1 = frequencyCount(arr);

	for (int i =0; i < n; i++){
		cout << arr1[i] << " ";
	}
}