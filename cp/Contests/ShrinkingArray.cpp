#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		bool check = false;
		for(int i = 0; i < n; i++) cin >> a[i];

		for(int i = 0; i < n - 1; i++){
			if(abs(a[i] - a[i+1]) <= 1){
				check = true;
				break;
			}
		}

		if(check){
			cout << "0\n";
		}
		else if(n == 2){
			cout << "-1\n";
		}
		else{
			cout << "1\n"; 
		}
	}
}
