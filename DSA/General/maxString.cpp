#include <bits/stdc++.h>
using namespace std;

int maxScore(string s){
	int size = s.length();
	int score = 0;
	string left;
	string right;

	for (int i = 0; i< s.length() - 1; i++){

		int temp = 0;

		for (int j = 0; j <= i; j++){
			left += s[j];
			if (s[j] == '0') temp += 1;
		}
		for (int j = i+1; j < s.length() ; j++){
			right += s[j];
			if (s[j] == '1') temp += 1;
		}
		if (temp > score) score = temp;
	}
	return score;
}

int main (){
	
	string s;
	cin >> s;


	cout << maxScore(s);
}