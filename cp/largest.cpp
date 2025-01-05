#include <bits/stdc++.h>
using namespace std;

int largest(vector<int> &arr) {
        int l = arr[0];
        for (auto val : arr){
            if (val > l) l = val;
        }
        return l;
}

int main (){
	
	int n;
	cin >> n;
	vector <int> arr;

	for (int i =0; i<n ; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	
	cout << largest(arr);
}