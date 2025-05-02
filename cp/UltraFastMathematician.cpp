#include <bits/stdc++.h>
using namespace std;

int main (){
	string a,b,c;
	cin >> a >> b;

	int n = a.size();

	for(int i = 0; i < n; i++){
		if(a[i] == '0' && b[i] == '0'  ||  a[i] == '1' && b[i] == '1'){
			c += '0';
		}
		else c += '1';
	}

	cout << c;
}