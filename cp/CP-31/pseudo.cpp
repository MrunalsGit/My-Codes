#include <bits/stdc++.h>
using namespace std;

int main (){
	int n;
	cin >> n;
	vector <int> arr(n,0);
	bool check = 0;
	int cnt = 0;

	int minm = INT_MAX;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		if(check == 0 && i > 0 && arr[i-1] != arr[i] ) check = 1;

		if(arr[i] == minm) cnt++;
		else{
			minm = min(minm, arr[i]);
			cnt = 1;
		}
	}
	cout << "minm = " << minm << endl;

	if(check == 0) cout << -1 << endl;
	else{
		vector<int> arrB;
		for(int i =0; i < arr.size(); i++) {
			if(arr[i] == minm ){
				arrB.push_back(arr[i]);
				arr.erase(arr.begin()+i);
				i--;
			}
		}

		cout << arrB.size() << " " << arr.size() << endl;
		for(auto i : arrB) cout << i << " ";
		cout << endl;
		for(auto i : arr) cout << i << " ";
	}

}