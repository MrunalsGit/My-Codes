#include <bits/stdc++.h>
using namespace std;

int main (){

	string s1,s2;
	getline(cin,s1);
	getline (cin, s2);

	unordered_set<char> us1;
	unordered_set<char> us2;
	bool anagram = true;

	if (s1.length() == s2.length()){

		for (int i = 0; i < s1.length() ; i++){
			us1.insert(s1[i]);
			us2.insert(s2[i]);
		}

		for (auto val : us1){
			if (us1.count(val) != us2.count(val)){
				anagram = false;
			}
		}

		if (anagram) cout << "Anagram";
		else cout << "Not Anagram";




	}
	else cout << "Not Anagram";


	return 0;
}