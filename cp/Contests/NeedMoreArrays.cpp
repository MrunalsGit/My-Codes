#include <bits/stdc++.h>
using namespace std;

int main (){
	
	int t;
	cin >> t;

	for(int j = 0; j < t; j++){
		int n;
		cin >> n;
		vector<int> arr(n);

		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		int prev = arr[0];
		int ans = 1;

		for(int i = 1; i < n; i++){
			if(arr[i] > prev + 1){
				ans++;
				prev = arr[i];
			}
		}

		cout << ans << endl;
	}
}