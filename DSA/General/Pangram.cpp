#include <bits/stdc++.h>
using namespace std;

int main (){
	int n;
	cin >> n;

	string s;
	cin >> s;

	unordered_map <char,int> mpp;

	for(int i =0; i < n ; i++){
		if (s[i] > 'Z' ) s[i] -= 32;
		mpp[s[i]]++;
	}

	int cnt = mpp.size();
	
	if(cnt == 26) cout << "YES";
	else cout << "NO";
	
}