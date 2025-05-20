#include <bits/stdc++.h>
using namespace std;

int longestSubarrayOnlyPositive(vector <int> arr, int k){
	int left = 0, right = 0;
	int sum = 0;
	int maxLen = 0;
	while(right < arr.size()){

		sum += arr[right];

		if(sum < k) ++right;

		if(sum > k){
			while(sum > k){
				sum -= arr[left];
				++left;
			}
			if(sum < k) right++;
		}

		if (sum == k){
			maxLen = max(maxLen, right - left + 1);
			right++;
		}

	}
	return maxLen;
}

int main (){
	int n,k;
	cin >> n;

	vector <int> arr;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	cin >> k;

	cout << longestSubarrayOnlyPositive(arr, k);
}