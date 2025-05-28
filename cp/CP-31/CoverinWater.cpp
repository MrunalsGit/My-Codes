#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;

	for(int i = 0; i < t; i++){
		int n;
		string s;
		cin >> n >> s;

		int cnt = 0, ans = 0, empty = 0;

		for(auto i : s){
			if(i == '.') {
				empty++;
				cnt++;
				ans = max(ans,cnt);
			}
			else cnt =0;

			if(ans == 3) break;
		}

		if(ans == 3) cout << 2;
		else if (ans == 0) cout << 0;
		else cout << empty;

		cout << endl;

	}
}

// T.C = O(n)
// S.C = O(n)