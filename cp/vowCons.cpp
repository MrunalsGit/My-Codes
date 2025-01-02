#include <bits/stdc++.h>
using namespace std;

int main (){

	string s;
	getline(cin, s);
	int cons=0,vow=0;

	unordered_set <char> vowels = {'A','E','I','O','U','a','e','i','o','u'};
	for (auto ch : s){
		if (isalpha(ch)){
			if (vowels.count(ch)) vow++;
			else cons++;
		}
	}
	
	cout << "Cons = " << cons << endl << "Vow = " << vow;
}