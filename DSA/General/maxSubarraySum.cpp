#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(vector <int> arr, int n){
	long long maxSum  = LONG_MIN;
	long long sum = 0;

	for (int i =0; i < n; i++){
		sum += arr[i];

		if (sum > maxSum) maxSum = sum;

		if(sum < 0) sum = 0;
	}

	if(maxSum < 0) return 0;
	return maxSum;
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

	cout << maxSubarraySum(arr, n);
}