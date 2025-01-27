#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector <int> &arr, int k){
	map <int,int> mpp;
	int sum = 0;
	int maxLen = 0;
	for (int i = 0; i < arr.size() ; i++){
		
		sum += arr[i];
		int diff = sum - k;

		if(sum == k){
			maxLen = max(maxLen, i+1);
		}

		if (mpp.find(diff) != mpp.end()){
			maxLen = max(maxLen, i - mpp[diff]);
		}

		if(mpp.find(sum) == mpp.end()){
			mpp[sum] = i;
		}

	}
	return maxLen;
}

int main () {
	int n,k;
	cin >> n;

	vector <int> arr(n);
	for (int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		arr[i] = temp;
	}

	cin >> k;

	cout << longestSubarray(arr, k);
}