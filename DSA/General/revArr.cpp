#include <bits/stdc++.h>
using namespace std;

void reverseArray(vector <int> &arr){
	int temp;
	int s = arr.size();
	for (int i = 0; i < s/2; i++){
		temp = arr[i];
		arr[i] = arr[s-i-1];
		arr[s-i-1] = temp;
	}

	for (int i = 0 ; i < s; i ++){
		cout << arr[i] << " ";
	}

}


int main (){
	
	int n;
	cin >> n;
	vector <int> arr;

	for (int i = 0; i < n; i++){

		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	reverseArray(arr);
}