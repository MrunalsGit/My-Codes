#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;

	while(t--){
		int n;
		cin >> n;
		int pos = 0, neg = 0;

		while(n--){
			int temp;
			cin >> temp;

			if(temp == -1) neg++;
			else pos++;
		}

		bool check = 1;
		int cnt = 0;

		while(check){
			if(neg % 2 == 1){
				neg--;
				pos++;
				cnt++;
			}

			if(neg % 2 == 0 && pos >= neg ) break;

			if(neg > pos){
				neg--;
				pos++;
				cnt++;
			}
			if(neg % 2 == 0 && pos >= neg ) break;

		}
		cout << cnt << endl;

	}
}