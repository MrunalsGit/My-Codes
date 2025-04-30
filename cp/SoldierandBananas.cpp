#include <bits/stdc++.h>
using namespace std;

int main (){
	int k,n,w;
	cin >> k >> n >> w;
	int sum = ((w*(w+1))/2)*k;

	if((sum - n) > 0) cout << sum - n;
	else cout << 0;
	
}