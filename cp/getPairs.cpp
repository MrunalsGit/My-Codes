#include <bits/stdc++.h>
using namespace std;

void getPairs(vector <int> &arr){
	for (int i =0; i < arr.size() -2 ; i++){
		vector <int> temp;
		for (int j = i+1; j < arr,size()-1; j++ ){
			vector <int> final(2,0);
			if (arr[i] + arr[j] == 0){
				arr.push_back(i);
				arr.push_back(j)
			}
		}
	}
} 

int main (){
	int n;
	cin >> n;

	vector <int> arr;
	for (int i =0; i <n ; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	getPairs(arr);
}