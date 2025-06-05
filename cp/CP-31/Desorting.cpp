#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		int diff = INT_MAX;
		int prev = 0;
		bool check = 0;

		for(int i = 0 ;i < n; i++){
			int temp;
			cin >> temp;
			if(i != 0){
				diff = min(diff, abs(prev - temp));

				if(check == 0 && (prev > temp)){
					check = 1;
				}
			}
			prev = temp;
		}
		if(check) cout << 0 << endl;
		else cout << (diff/2) + 1 << endl;

	}
}