#include <bits/stdc++.h>
using namespace std;

int subArraysWithSumk(vector <int> &arr, int k){
	unordered_map <int,int> mpp;
	mpp[0] = 1;
	int preSum = 0, cnt = 0;

	for(int i =0; i < arr.size(); i++){
		preSum += arr[i];
		int diff = preSum - k;
		cnt += mpp[diff];
		mpp[preSum] += 1;
	}

	return cnt;
}

int main () {
	int n;
	cin >> n;

	vector <int> arr;

	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}
	int k;
	cin >> k;

	cout << subArraysWithSumk(arr, k);
}