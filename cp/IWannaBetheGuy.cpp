#include <bits/stdc++.h>
using namespace std;

int main (){
	
	int n;
	cin >> n;
	cin.ignore();

	string a,b;
	getline (cin , a);
	getline (cin , b);

	unordered_set<string> s;

	string c,d;

	for(int i = 0; i <= a.size(); i++){
		if (c == "0")continue;
		else if (a[i] == ' ' || i == a.size()){
			s.insert(c);
			c = "";
		}
		else c += a[i];
	}
	for(int i = 0; i <= b.size(); i++){
		if(c == "0")continue;
		if (b[i] == ' ' || i == b.size()){
			s.insert(c);
			c = "";
		}
		else {
			c += b[i];
		}
	}

	for(auto i : s){
		cout << i << " ";
	}

	if(s.size() == n) cout << "I become the guy.";
	else cout << "Oh, my keyboard!";
}