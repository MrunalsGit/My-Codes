#include <bits/stdc++.h>
using namespace std;

int daysReq(vector<int> arr, int weight){
	
	int cnt = 1;
	int currWt = 0;
	for(int i = 0; i < arr.size(); i++){
		if(arr[i] + currWt <= weight){
			currWt += arr[i];
		}
		else {
			cnt++;
			currWt = arr[i];
		}
	}
	return cnt;
}

int leastWeightCapacity(vector <int> arr, int d){
	
	int low = *max_element(arr.begin(), arr.end());
	int high = accumulate(arr.begin(), arr.end(), 0);
	

	while(low <= high){
		int mid = (low + high )/ 2;
		int days = daysReq(arr,mid);

		if(days > d ) low = mid + 1;
		else high = mid - 1;
	}
	return low;

}

int main (){
	int n, d;
	cin >> n;

	vector<int> arr(n);

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	cin >> d;

	cout <<  leastWeightCapacity(arr,d);
}
