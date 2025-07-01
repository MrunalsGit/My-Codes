#include <bits/stdc++.h>
using namespace std;

int myAtoi(string s, int n = 0, int sum = 0, int sign = 1, bool signFound = 0){
	
	if(n >= s.length()) return sum*sign;
	
	char c = s[n];
	
	if(c == ' ' && !signFound) return myAtoi(s, n+1);
	
	if((c == '+' || c == '-')  && !signFound ) {
		return myAtoi(s, n+1, sum, (c == '+')? 1:-1, 1);
	}
	
	if(isdigit(c)){
		int digit = c - '0';
	
		if(sum > INT_MAX / 10 || ((sum == INT_MAX / 10 )&&( digit > INT_MAX % 10))){
			return (sign == 1) ? INT_MAX : INT_MIN;
		}
		
		return myAtoi(s, n+1, sum*10 + digit, sign, 1);
	}
	
	return sign * sum;
}

void solve(){
	 string s;
	 cin >> s;
	 
	 cout << INT_MAX << " " << INT_MIN;
	 // cout << myAtoi(s);
}

int main (){
	int t; cin >> t;
	while(t--){
		solve();
	}
}