#include <bits/stdc++.h>
using namespace std;

int main (){
	
	int n,t;
	cin >> n >> t ;

	string s;
	cin >> s;

	int a = 0;

	while(a < t){
		for (int i = 1; i < n; i++){
			if(s[i-1] == 'B' && s[i] == 'G'){
				swap(s[i],s[i-1]);
				i++;
			}
		}
		a++;
	}
	cout << s;

}