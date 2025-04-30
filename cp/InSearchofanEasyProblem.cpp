#include <bits/stdc++.h>
using namespace std;

int main (){
	
	int n;
	cin >> n;

	int found = 0;

	for (int i = 0; i < n; i++){
		int temp;
		cin >> temp;

		if (temp == 1) {
			found = 1;
			break;
		}
	}

	if (found == 1) cout << "HARD";
	else cout << "eAsY";
}