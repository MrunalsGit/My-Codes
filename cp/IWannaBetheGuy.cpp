#include <bits/stdc++.h>
using namespace std;

using namespace std;

int main (){
	
	int n;
	cin >> n;
	cin.ignore();

	string a,b;
	getline (cin , a);
	getline (cin , b);

	// a.erase(remove(a.begin(),a.end(),' '),a.end());
	// b.erase(remove(b.begin(),b.end(),' '),b.end());

	unordered_map <int,int> mpp;

	for (int i = 0; i < a.size(); i++ ){
		if(a[i] == ' ') continue;
		else mpp[a[i]]++;
	}
	for(int i = 0; i < b.size(); i++){
		if(b[i] == ' ') continue;
		else mpp[b[i]]++;
	}

	for(auto i : mpp){
		cout << i.first << "  ";
	}

	if(mpp.size() == n) cout << "I become the guy.";
	else cout << "Oh, my keyboard!";
}