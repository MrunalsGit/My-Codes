#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		vector <int> arr;
		int even = 0, odd = 0;
		int ans = 0;

		for(int i = 0; i < n; i++){
			int temp;
			cin >> temp;
			arr.push_back(temp);
		}

		for(int i = 0; i < n; i++){

			if(arr[i] % 2 == 0) {

				if(odd >= 2) ans += odd-1;
				odd = 0;
				even++;
			}
			else{
				if(even >= 2)ans += even-1;
				even = 0;
				odd++;
			}

		}
		if(even >= 2)ans += even-1;
		if(odd >= 2) ans += odd-1;

		cout << ans << endl;

	}
}



// 2
// 0
// 3