#include <bits/stdc++.h>
using namespace std;

int lastRemaining(int n, int i = 1, vector<int> arr = {1,2}){

	if (n == 1) return 1;
	if(n == 2) return 2;

	if(i ==1){
		for (int j = 2; j < n ; j++){
			arr.emplace_back(j+1);
		}
	}

	if (arr.size() == 1) return arr[0];

	if (i%2 != 0){
		for (int j = 0; j < arr.size(); j+= 1){
			arr.erase(arr.begin() + j);
		}
	}
	else {
		for (int j = 0 ; j < arr.size() ; j += 1 ){
			arr.erase(arr.end()- (j + 1));
		}
	}

	return lastRemaining(n, ++i, arr);
}

int main (){
	int n;
	cin >> n;

	cout << lastRemaining(n);
}