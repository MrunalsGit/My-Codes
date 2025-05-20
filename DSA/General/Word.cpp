#include <bits/stdc++.h>
using namespace std;

int main (){
	string s;
	cin >> s;
	int up = 0,low = 0;
	int n = s.size();

	for(int i = 0; i < n; i++){
		if (s[i] > 'Z') low++;
		else up++;
	}

	if(up > low){
		for(int i = 0; i < n; i++){
			if(s[i] > 'Z' ) s[i] -= 32;
		}
	}
	else{
		for(int i = 0; i < n; i++){
			if(s[i] <= 'Z' ) s[i] += 32;
		}
	}

	cout << s;
}