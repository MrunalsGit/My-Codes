#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
    int ret = 0;
    for (int i = 0; i < s.length(); i++){
        
        if (s[i] =='I') {
            
            if( i != s.length()-1 and s[i+1] == 'V') ret -= 1;
            else if (i != s.length()-1 and s[i+1] == 'X') ret -= 1;
            else ret += 1;
        }
        else if (s[i] =='V') ret += 5;
        else if (s[i] =='X') {
            
            if( i != s.length()-1 and s[i+1] == 'L') ret -= 10;
            else if (i != s.length()-1 and s[i+1] == 'C') ret -= 10;
            else ret += 10;
        }
        else if (s[i] =='L') ret += 50;
        else if (s[i] =='C') {
            
            if( i != s.length()-1 and s[i+1] == 'D') ret -= 100;
            else if (i != s.length()-1 and s[i+1] == 'M') ret -= 100;
            else ret += 100;
        }
        else if (s[i] =='D') ret += 500;
        else if (s[i] =='M') ret += 1000;
    }
    return ret;
}

int main (){
	string s;
	cin >> s;

	cout << romanToInt(s);
}