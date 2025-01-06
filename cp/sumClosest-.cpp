#include <bits/stdc++.h>
using namespace std;

vector <int> sumClosest(vector <int>& arr, int target){
	
	int diff ;
	int small,big;
	if (arr[0] >= arr[1]) {
		small = arr[1]};
		big = arr [0];
		}
	else{
		small = arr[0]};
		big = arr [1];		
	}

	for (int i =0; i < arr.size()-2; i++){
		
		if (i>0){
			if (arr[i] >= arr[i+1]) {
				small = arr[i+1]};
				big = arr [i];
			}
			else{
				small = arr[i]};
				big = arr [i+1];		
			}
		}
		


}

int main () {
	
	int n, target;
	cin >> n;

	vector <int> arr ;

	for (int i=0; i < n; i++){

		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	cin >> target;

	sumClosest(arr, target);
}