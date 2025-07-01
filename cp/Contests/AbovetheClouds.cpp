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
		
		int arr[26] = {0};
		
		for(int i = 0; i < n; i++){
		  arr[s[i] - 'a'] += 1;
		}
		
		int cnt = 0;
		bool ans = 0;

		for(auto i : arr){
		  if(i > 1) cnt++;
		  if(i > 2) {
		    ans = true;
		    break;
		  }
		  if(cnt > 1) {
		    ans = true;
		    break;
		  }
		}


		
		if(n == 3){
		  	  if (s[0] == s[1] || s[2] == s[1]) {
		  	    ans = true;
		  	  }
		}

		if(ans == 0){
			if(s[0] != s[n-1]){
				for(auto i : arr) {
					if(i > 1) ans = true;
				}
			}
		}
		
		if(ans) cout << "Yes";
		else cout << "No";
		cout << endl;
		

	}
}