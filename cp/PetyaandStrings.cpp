#include <bits/stdc++.h>
using namespace std;

int main (){
	
	string a,b;
	cin >> a >> b ;

	int n = a.size();
	int ans = 0;

	for(int i = 0; i < n; i++){

		int elemA = 0, elemB = 0;
		if (a[i] > 'Z') elemA = a[i] - 32;
		else elemA = a[i];

		if (b[i] > 'Z') elemB = b[i] - 32;
		else elemB = b[i];

		if (elemA > elemB) {
			ans = 1;
			break;
		}
		else if (elemA < elemB) {
			ans = -1;
			break;
		}
	}

	cout << ans;

	

}