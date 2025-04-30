#include <bits/stdc++.h>
using namespace std;

int main (){
	
	string s;
	cin >> s;
	int n = s.length();

	unordered_map <char, int> mpp;

	for (int i =0; i < n; i++){
		mpp[s[i]]++;
	}


	if (mpp.size() % 2 == 0) cout << "CHAT WITH HER!";
	else cout << "IGNORE HIM!";

}