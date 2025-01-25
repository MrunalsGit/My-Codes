#include <bits/stdc++.h>
using namespace std;

bool isStringPalindrome (string &s, int i = 0){

	if (i == 0){
		for(int j = 0; j < s.size();){
			if(isalnum(s[j])) j++;
			else s.erase(j,1);
		}
		transform(s.begin(),s.end(),s.begin(), ::tolower);
	}

	if(i >= s.size()) return 1;
	if( s[i] != s[s.size() -1 -i]) return 0;

	return isStringPalindrome(s, ++i);




	// if( i == 0) {
	// 	for (int i =0; i < s.size(); ){
	// 		if (isalnum(s[i])) ++i;
	// 		else s.erase(i,1);
	// 	}
	// 	transform(s.begin(), s.end(), s.begin(), ::tolower);
	// 	rev = s;
	// }


	// if( i >= rev.size()/2){
	// 	if(rev == s) return 1;
	// 	return 0;
	// }

	// char temp = rev[i];
	// rev[i] = rev[rev.size()-1-i];
	// rev[rev.size()-1-i] = temp;

	// return isStringPalindrome(s, ++i, rev);

}

int main () {
	string s;
	getline (cin, s);

	cout << isStringPalindrome(s);

}