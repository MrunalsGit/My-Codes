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

	int cnt = mpp.size();

	cout << cnt;
	
}