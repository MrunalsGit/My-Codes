#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
	
	for (int j =0; j < a; j++){

		int n;
		cin >> n;

		string s;
		cin >> s;

		string t;

		for (int i =0; i < n; i++){
			if (s[i] == '1') t += '0';
			else t += '1';
		}

		for (int i =0; i < n ; i++){
			cout << t[i];
		}
		cout << endl;
	}
}
	
