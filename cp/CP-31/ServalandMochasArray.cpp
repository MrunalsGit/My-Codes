#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		vector<int>arr;

		for(int i = 0; i < n; i++){
			int temp;
			cin >> temp;
			arr.push_back(temp);
		}

		int currGCD = 0;
		int minGCD = INT_MAX;

		for(int i = 0; i < n; i++){
			for(int j= 0; j <= i; j++){
				currGCD = __gcd(arr[i],arr[j]);
				minGCD = min(minGCD, currGCD);
			}
		}

		if(minGCD <= 2) cout << "Yes\n";
		else cout << "No\n";

	}
}