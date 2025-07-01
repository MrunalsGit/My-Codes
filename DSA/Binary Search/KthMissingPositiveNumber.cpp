#include <bits/stdc++.h>
using namespace std;

int findKthPositive(vector <int> arr, int k){
	
	int low = 0, high = arr.size()-1;
	while(low <= high){
		int mid = (low + high) / 2;
		int missing = arr[mid] - (mid + 1);
		if(missing < k) low = mid + 1;
		else high = mid - 1;
	}
	return low + k;
}

int main (){
	int n, m;
	cin >> n;

	vector<int> arr(n);

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	cin >> m;

	cout << findKthPositive(arr,m);
}
