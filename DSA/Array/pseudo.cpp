#include <bits/stdc++.h>
using namespace std;

int check(vector <int> &arr, int n){

	// int j = 0;
	// for(int i =1; i < arr.size(); i++){
	// 	if(arr[j] != arr[i] ){
	// 		arr[j+1] = arr[i];
	// 		j++;
	// 	}

	// }

		vector<int>::iterator it = unique(arr.begin(), arr.end());
        vector<int>::iterator it2 = arr.begin();
        
       

    	return it-it2;

	
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

	cout <<check(arr,n) << endl;

	for(auto i : arr) cout << i << " ";
}