#include <bits/stdc++.h>
using namespace std;

void printMaxSubarraySum (vector <int> arr){
	int maxSum = INT_MIN;
	int sum = 0;
	int ansStart = -1,ansEnd = -1;
	int start = 0;

	for (int i =0; i < arr.size(); i++){

		if(sum == 0) {
			start = i;

	}

		sum += arr[i];

		if(sum > maxSum){
			maxSum = sum;
			ansStart = start;
			ansEnd = i;
		}

		if(sum < 0) sum = 0;

	}

	for(int i = ansStart; i <= ansEnd; i++){
		cout << arr[i] << endl;
	}
}


int main (){
	int n;
	cin >> n;

	vector <int> arr;
	for (int i =0; i < n; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	printMaxSubarraySum(arr);
}