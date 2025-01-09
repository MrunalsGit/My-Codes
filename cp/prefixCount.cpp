#include <bits/stdc++.h>
using namespace std;

void prefixCount(vector<string>& words, string pref){
	int s = pref.size();
	int count = 0;

	for (int i=0; i < words.size(); i++){
		int temp = 0;
		for (int j =0; j < s; j++){
			if (words[i][j] == pref[j]) temp += 1;
		}
		if (temp == s) count += 1;
	}

	cout << count;
}

int main () {
	
	int n;
	cin >> n;

	vector <string> s;
	for (int i =0; i < n; i++){
		string temp;
		cin >> temp;
		s.push_back(temp);
	}
	string pref;
	cin >> pref;

	prefixCount(s, pref);
}