#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;

	while(t--){
		int n,s;
		cin >> n >> s;

		vector <int> arr(n);

		for(int i = 0; i < n; i++){
			cin >> arr[i];
		}

		int ans = 0;

		if (s >= arr[n-1]) ans = s - arr[0];

		else if (s <= arr[0]) ans = arr[n-1] - s;

		else if((s - arr[0]) < (arr[n-1] - s)){
			ans = (s - arr[0]) + (arr[n-1] - arr[0]); 
		}
		else{
			ans = (arr[n-1] - s) + (arr[n-1] - arr[0]);
		}

		cout << ans << endl;
	}
}