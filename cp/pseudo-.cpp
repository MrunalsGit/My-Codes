#include <bits/stdc++.h>
using namespace std;


int noOfStud(vector <int> arr, int pages, int n){
	int cur = 0, cnt = 1;
	for(int i =0; i < n ; i++){
		if(cur + arr[i] <= pages) cur += arr[i];
		else {
			cnt++;
			cur = arr[i];
		}
	}
	return cnt;
}

int findPages(int* arr,int n, int k){
    if(n < k) return -1;
	int low = *max_element(arr, arr+n);
	int high = accumulate(arr, arr+n,0);

	while(low <= high){
		int mid = (low + high) / 2;
		int stud = noOfStud(arr,mid,n);

		if(stud > k) low = mid + 1;
		else high = mid -1;
	}
	return low;
}

int main (){

	int n, m;
	cin >> n;

	int arr(n);

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	cin >> m;

	cout << findPages(arr,n, m);
}
