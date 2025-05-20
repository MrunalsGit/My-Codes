#include <bits/stdc++.h>
using namespace std;

string toLowerCase(string s) {
        char sing;
        string ret = "";
        for (auto ch : s){
            if (ch <= 'Z' && ch >= 'A') sing = ch + 32;
            else sing = ch;
            ret += sing;
        }
        return ret;
}

int main (){
	
	string s;
	getline (cin, s);

	cout << toLowerCase(s);
}