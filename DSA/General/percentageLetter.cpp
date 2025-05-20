#include <bits/stdc++.h>
using namespace std;

int percentageLetter(string s, char letter) {
    int count =0;
    for(int i = 0; i < s.length(); i++){
        if (s[i] == letter) count += 1;
    }
    double ret = count/static_cast<double>(s.length());
    return ret*100;
}

int main () {
	string s;
	cin >> s;
	char ch;
	cin >> ch;

	cout <<endl <<"Output = " <<percentageLetter(s,ch);
}