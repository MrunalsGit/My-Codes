#include <bits/stdc++.h>
using namespace std;

int main (){
	string a,b;
	cin >> a >> b;

	int n = a.size();

	for(int i = 0; i < (n/2); i++){
		swap(a[i], a[n-i-1]);
	}

	if(a == b) cout << "YES";
	else cout << "NO";
}