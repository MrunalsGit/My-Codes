#include <bits/stdc++.h>
using namespace std;

int longestUniqueSubstr(string & s){
	string str ;
	int count = 0;

	for (int i =0; i < s.length(); i++){
		str += s[i];



		for(int j=0; j < str.length()-1; j++){

			if (s[i] == str[j]){
				count = str.length()-1;
				str = s[i];
				break;
			}

			if (count < str.length()) count = str.length();
		}




	}

	return count;
}

int main (){
	string s;
	cin >> s;

	cout << longestUniqueSubstr(s);
}