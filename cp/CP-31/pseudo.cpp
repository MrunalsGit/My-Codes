#include <bits/stdc++.h>
using namespace std;

int main (){
	int n;
	cin >> n;

	vector <int> arr;
	for(int i = 0; i< n; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}
	int found= -1;

	for(int i = 0; i < n; i++){

		if( accumulate(arr.begin(), arr.begin()+i+1, 1, multiplies<int>()) == accumulate(arr.begin()+i+1, arr.end(), 1, multiplies<int>()) ){
			found = i+1;
			break;
		}
	}

	cout << found << endl;
}