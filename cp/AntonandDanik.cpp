#include <bits/stdc++.h>
using namespace std;

int main () {
	
	int n, cnt = 0;
	cin >> n;

	string s;
	cin >> s;

	for (int i = 0; i < n; i++){
		if (s[i] == 'A') cnt++;
		else cnt--;
	}

	if (cnt > 0) cout << "Anton";
	else if (cnt < 0) cout << "Danik";
	else cout << "Friendship";
}