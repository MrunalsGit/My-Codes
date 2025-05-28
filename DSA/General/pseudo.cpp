#include <bits/stdc++.h>
using namespace std;

void hsh(vector <int> arr, int n){

	unordered_map <int,int> mpp;
	for(int i = 0; i < n; i++){
		mpp[arr[i]]++;
	}

	for(auto i : mpp){
		cout << i.first << " " << i.second << endl;
	}
}


int main (){
	
	int n;
	cin >> n;

	vector <int> arr;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	hsh(arr, n);

}