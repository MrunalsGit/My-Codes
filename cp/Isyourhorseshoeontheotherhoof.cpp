#include <bits/stdc++.h>
using namespace std;

int main (){

	int cnt = 0;
	
	map <int,int> mpp;
	for(int i = 0; i < 4; i++){
		int temp;
		cin >> temp;
		mpp[temp]++;
		if(mpp[temp] > 1)cnt++;
	}
	cout << cnt;
}