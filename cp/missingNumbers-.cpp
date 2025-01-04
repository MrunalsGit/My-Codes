#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector <int> &nums){
	int n = nums.size();

	int hash [n] = {0};

	for (int i =0; i < n; i++){
		hash[nums[i]] += 1;
	}

	for (int i = 0; i < n; i++){
		if(hash[i] == 0) return i;
	}

	return 0;
}

int main(){
	
	int s;
	cin >> s;

	vector <int> nums;
	for (int i =0; i < s; i++) {
		cin >> nums[i];
	}

	cout << missingNumber(nums);
}