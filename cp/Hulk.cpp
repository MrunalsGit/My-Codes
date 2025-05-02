#include <bits/stdc++.h>
using namespace std;

int main (){
	int n;
	cin >> n;

	string a = "I hate ";
	string a1 = "I hate ";
	string b = "I love ";
	string c = "that ";
	string d = "it";


	for(int i = 0; i < n; i++){
		if (i == n-1) a += d;
		else if (i % 2 == 0) {
			a += c;
			a += b;
		}
		else{
			a += c;
			a += a1;
		}
	}
	cout << a;
}