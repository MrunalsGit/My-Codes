#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;

	while(t--){

		int n,k;
		cin >> n >> k;
		int found = 0;

		while(n--){
			int temp;
			cin >> temp;

			if(temp == k) found = 1;
		}

		if(found) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}