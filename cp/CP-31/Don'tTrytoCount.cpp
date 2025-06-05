#include <bits/stdc++.h>
using namespace std;

int main (){

	int t;
	cin >> t;

	while(t--){

		int n,m;
		cin >> n >> m;
	
		string x,s;
		cin >> x >> s;

		int repeat, cnt = 0;
		
		if(n > m) repeat = 2;
		else repeat = (m/n) + 2;

		while(repeat --){
				
			if(x.find(s) != string::npos){
				cout << cnt << endl;
				break;
			}
			else{
				x += x;
				cnt++;
			}
			if(cnt > 5)break;
		}
	
		if(x.find(s) == string::npos) cout << -1 << endl;
			
		
	}
}




