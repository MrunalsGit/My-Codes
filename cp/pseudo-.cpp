#include <bits/stdc++.h>
using namespace std;


int main (){

	int n,m;
		cin >> n >> m;
	
		string x,s;
		cin >> x,s;
	
		int repeat, cnt = 0;
	
		if(n > m) repeat = 2;
		else repeat = m/n + 1;
	
		while(repeat --){
			cnt++;
			if(x.find(s)){
				cout << cnt << endl;
				break;
			}
			else{
				x += x;
			}
		}
	
		cout << -1 << endl;
}
