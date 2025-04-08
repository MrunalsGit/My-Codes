#include <bits/stdc++.h>
using namespace std;

int main (){
	
	string s;
	cin >> s;

	int cnt = 0;
	int n = s.size();

	for (int i = 0; i < n; i++){
		if(s[i] == '4' || s[i] == '7') cnt += 1;
	}

	string ans = "YES";
	int temp = cnt;

	while(temp > 0){
		int a =  temp%10;
		if (a != 4 && a != 7) {
			ans = "NO";
			break;
		}

		temp /= 10;
	}

	if (cnt == 0) cout << "NO";
	else cout << ans;
}