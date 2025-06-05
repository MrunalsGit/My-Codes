#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		vector<int> arr(n,0);
		int cnt = 0;

		for(int i = 0; i < n; i++){
			cin >> arr[i];

			if( i > 0 && (arr[i-1] - arr[i])  > 0 ){
				cnt++;
			}
		}

		cout << n+cnt << endl;

		for(int i = 0; i < n; i++){
			if( i > 0 && (arr[i-1] - arr[i])  > 0 ) cout << arr[i] << " ";
			cout << arr[i] << " ";
		}

		
		
		

		cout << endl;

	}
}