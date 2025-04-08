#include <bits/stdc++.h>
using namespace std;

int main (){
	
	int r;
	cin >> r ;
	cin.ignore();
	int ans = 0;

	for(int i = 0; i < r ; i++){
		string s;
		getline(cin, s);
		
		int cnt = 0;
		if (s[0] == '1') cnt += 1;
		if (s[2] == '1') cnt += 1;
		if (s[4] == '1') cnt += 1;

		if(cnt >= 2) ans+= 1;

	}
	cout << ans;
}