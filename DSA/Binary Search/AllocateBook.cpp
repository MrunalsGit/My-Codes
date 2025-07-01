#include <bits/stdc++.h>
using namespace std;

int noOfStud(vector <int> arr, int pages){
	int cur = 0, cnt = 1;
	for(int i =0; i < arr.size() ; i++){
		if(cur + arr[i] <= pages) cur += arr[i];
		else {
			cnt++;
			cur = arr[i];
		}
	}
	return cnt;
}

int findPages(vector <int> arr, int k){

	if(arr.size() < k) return -1;
	int low = *max_element(arr.begin(), arr.end());
	int high = accumulate(arr.begin(), arr.end(),0);

	while(low <= high){
		int mid = (low + high) / 2;
		int stud = noOfStud(arr,mid);

		if(stud > k) low = mid + 1;
		else high = mid -1;
	}
	return low;
}

int main (){

	int n, m;
	cin >> n;

	vector<int> arr(n);

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	cin >> m;

	cout << findPages(arr,m);
}
