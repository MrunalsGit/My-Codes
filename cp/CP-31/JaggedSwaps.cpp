#include <bits/stdc++.h>
using namespace std;

int main (){
	
	int t;
	cin >> t;

	for (int j =0; j < t; j++){

		int n;
		cin >> n;

		bool check = 1;

		for(int i = 0; i < n; i++){

			int temp;
			cin >> temp;
			if(check == 1 && i == 0 && temp != 1)check = 0;
		} 

		if(check) cout << "Yes";
		else cout << "No";
		cout << endl;
	}
}