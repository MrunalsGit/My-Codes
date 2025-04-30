#include <bits/stdc++.h>
using namespace std;

int main (){
	
	int repeat;
	cin >> repeat;

	for (int i = 0; i < repeat; i++){
		string s;
		cin >> s;
		int n = s.length();

		if (n <= 10) cout << s << endl;
		else{
			cout << s[0] << n-2 << s[n-1] << endl;

		}
	}

}