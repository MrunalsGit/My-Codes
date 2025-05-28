#include <bits/stdc++.h>
using namespace std;

int main (){
	
	int t;
	cin >> t;

	for(int j = 0; j < t; j ++){
		int n;
		cin >> n;

		map <int,int> mpp;

		for(int i = 0; i < n; i++){
			int temp;
			cin >>temp;
			mpp[temp]++;
		}
		if(mpp.size() > 2) cout << "NO";
		else if(mpp.size() == 1 ) cout << "Yes";
		else if (mpp.size() == 2){
			auto it = mpp.begin();
			int f = it->second;
			it++;
			int s = it->second;
			if(abs(f-s) <= 1) cout << "Yes";
			else cout << "No";
		}
		else cout << "No";
		cout << endl;
	}
}