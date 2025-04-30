#include <bits/stdc++.h>
using namespace std;

int main (){
	int n;
	cin >> n;
	n++;

	while(1){
		int a = n;
		map<int,int> mpp;
		while(a > 0){
			int temp = a%10;
			mpp[temp]++;
			a /= 10;
		}
		int found = 0;
		for(auto i : mpp){
			if(i.second != 1){
				found = 1;;
			}
		}
		if (found == 0) break;
		n++;
	}
	cout << n;

}