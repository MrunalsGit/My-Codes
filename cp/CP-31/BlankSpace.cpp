#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		int cnt = 0;
		int ans = INT_MIN;

		while(n--){
			int temp;
			cin >> temp;

			if(temp == 1) cnt = 0;
			else cnt++;
			ans = max(ans,cnt);
		}
		cout << ans << endl;

	}
}