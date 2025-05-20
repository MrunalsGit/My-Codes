#include <bits/stdc++.h>
using namespace std;

int pairWithMaxSum(vector <int> arr){
	int n = arr.size();
	int maxSum = INT_MIN;
	for (int i =0; i < n-1; i++){
		int sum = arr[i] + arr[i+1];
		maxSum = max(maxSum , sum);
	}	

	return maxSum;
}

int main (){
	int n;
	cin >> n;

	vector <int> arr;
	for(int i =0; i < n; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	cout << pairWithMaxSum(arr);
}