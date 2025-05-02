#include <bits/stdc++.h>
using namespace std;

int main (){
	int n ;
	cin >> n;

	vector <int> pi;
	int hash[n + 1] = {0};

	for(int i = 0; i < n; i ++){
		int temp;
		cin >> temp;
		pi.emplace_back(temp);
		hash[temp] = i + 1;
	}

	for (int i = 1; i < n + 1; i++){
		cout << hash[i] << " ";
	}
}