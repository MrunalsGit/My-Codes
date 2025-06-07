#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;

		string s;
		cin >> s;

		int first = 0, last = s.size()-1;

		while(first < last){
			

			if(s[first] == '1' && s[last] == '0' || s[first] == '0' && s[last] == '1' ){
				n -= 2;
			}
			else break;

			first++;
			last--;
		}
		cout << n << endl;

	}
}
// 1
// 2
// 5
// 0
// 3
// 1
// 0
// 2
// 4
