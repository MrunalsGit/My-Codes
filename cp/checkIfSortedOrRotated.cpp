#include <bits/stdc++.h>
using namespace std;

void Reverse (vector <int> &arr, int start, int end){
	while(start <= end){
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start ++;
		end --;
	}
}

bool checkIfSortedOrRotated(vector <int> & nums){
	int d;
    int n = nums.size();
    int lowest = nums[0];

    for(int i =0; i < n; i++) if (nums[i] < lowest) lowest = nums[i];

    for(int i = 0; i < n; i++){
        if(nums[i] == lowest) d = n - i;
    }

    if(d != 0){
	    Reverse(nums, 0 , n-d-1);
	    Reverse( nums, n - d, n-1);
	    Reverse(nums, 0, n-1);
    }

    int sorted = 1;

    for(int i = 0; i < n-1; i++ ){
    	if(nums[i] > nums[i+1] ) sorted = 0;
    }

    return sorted;
}

int main (){
	int n;
	cin >> n;

	vector <int> arr;
	for (int i =0; i< n; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	cout << checkIfSortedOrRotated(arr);
}