#include <bits/stdc++.h>
using namespace std;

bool checkIfSortrdArray(vector <int> &arr){

	for(int i = 1; i < arr.size(); i++){
		if(arr[i-1] > arr[i]) return 0;
	}

	return 1;
}

int main (){
	
	int t;
	cin >> t;

	for(int i = 0; i < t; i++){

		int n, k;
		cin >> n >> k;
		vector<int> arr;

		for(int j = 0; j < n; j++){
			int temp;
			cin >> temp;
			arr.push_back(temp);
		}

		if(checkIfSortrdArray(arr)) cout << "YES" << endl;
		else if(k > 1) cout << "YES"<< endl;
		else cout << "NO"<< endl;
	}
}

// TC = O(n) -per test case
// SC = O(n) -per test case