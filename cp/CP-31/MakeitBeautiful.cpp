#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		vector <int> arr;

		for(int i = 0; i < n; i++){
			int temp;
			cin >> temp;
			arr.push_back(temp);
		}

		sort(arr.begin(), arr.end(), greater<int>());
		int found = 1;

		if(arr[0] == arr[1]) {
			swap(arr[1], arr[n-1]);
			if(arr[0] == arr[1]) found = 0;
		}

		if (found) {
			cout << "Yes\n";
			for(auto i : arr) cout << i << " ";
			cout << endl;
		}
		else cout << "No\n";

	}
}