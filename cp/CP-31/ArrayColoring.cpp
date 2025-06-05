#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		int cnt = 0;

		while(n--){
			int temp;
			cin >> temp;

			if(temp % 2 == 1) cnt++;
		}

		if(cnt % 2 == 1) cout << "No" << endl;
		else cout << "Yes" << endl;

	}
}