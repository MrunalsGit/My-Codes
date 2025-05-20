#include <bits/stdc++.h>
using namespace std;

void freqCount (vector <int> &arr){
	int size = arr.size();


	vector <int > ret (size,0);

	for (int i =0; i < size; i++){
		ret[arr[i]-1] += 1;
	}

	for (int i =0; i < size; i++){
		cout << ret[i] << endl;
	}

}

int main (){
	
	int n; 
	cin >> n;

	vector <int> arr;
	for (int i = 0; i<n; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	freqCount(arr);
}