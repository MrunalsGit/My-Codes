#include <bits/stdc++.h>
using namespace std;

int main (){
	int n;
	string s;

	cin >> n >> s;

	int cnt = 0;
	char prev = s[0];

	if(n <= 1) cout << 0;
	else{
		for(int i =1; i < n; i++){
			if (prev == s[i]) {
				cnt++; 
			}
			prev = s[i];
		}
		cout << cnt;
	}
}