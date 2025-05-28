#include <bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    vector < int > nums2;

    int n = nums.size();

    for (int i =0; i < n ; i++){
        nums2.push_back(nums[i]*nums[i]);
    }

    for (int i =0; i < n-1; i++){
    	int min = i;
    	for (int j =i; j < n; j++){
    		if (nums2[j] < nums2[min]) min = j;
    	}
    	int temp = nums2[i];
    	nums2[i] = nums2[min];
    	nums2[min] = temp;
    }


    return nums2;
}

int main () {
	
	int n;
	cin >> n;

	vector < int > nums;

	for (int i =0; i < n; i++){
		int temp;
		cin >> temp;
		nums.push_back(temp);
	}

	vector <int> nums2 = sortedSquares(nums);

	for (int i =0 ; i < n; i++) cout << nums2[i] << " ";
}