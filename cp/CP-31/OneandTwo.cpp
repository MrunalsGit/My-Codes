#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;

	while(t--){
		
		int n;
		cin >> n;
		int cnt = 0;

		vector <int> arr;

		for(int i = 0; i < n; i++){
			int temp;
			cin >> temp;
			arr.push_back(temp);
			if(temp == 2) cnt++;
		}

		int found = -1;
		int cnt2 = 0;

		if(cnt % 2 == 1) cout << found << endl;
		else {
			for(int i = 0; i < n; i++){
				if(arr[i] == 2) cnt2++;
				if(cnt2 == cnt/2) {
					found = i+1;
					break;
				}
			}
			cout << found << endl;
		}
		
	
	}
}