#include <bits/stdc++.h>
using namespace std;

//nw

int missingNumber(vector <int> &nums){
	int n = nums.size();

	int hash [n+2] = {0};

	for (int i =0; i < n; i++){
		hash[nums[i]] += 1;
	}

	for(auto it : hash) cout << it << " ";

	for (int i = 1; i < n+2; i++){
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