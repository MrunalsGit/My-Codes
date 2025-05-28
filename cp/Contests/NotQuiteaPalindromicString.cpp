#include <bits/stdc++.h>
using namespace std;

int main (){
	
	int t;
	cin >> t;

	for(int j = 0; j < t; j++){

		int n,k;
		cin >> n >> k;
		string s;
		cin >> s;

		int one = 0, zero = 0;

		for (auto i : s){
			if(i == '1') one++;
			else zero++;
		}


		int maxm = int(one/2) + int(zero/2);
		int minm = (max(one,zero) - min(one,zero))/2;

		if(k >= minm && k <= maxm && (k - minm) % 2 == 0) cout << "Yes";
		else cout << "No";
		cout << endl;


	}
}