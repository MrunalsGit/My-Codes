#include <bits/stdc++.h>
using namespace std;

long long speed(vector<int> arr, int k){
	
	long long time = 0;

	for(int i =0; i < arr.size(); i++){
			time += ceil(double(arr[i])/k);
	}
	return time;
}

int minEatingSpeed(vector <int> arr, int h){
	int low=1;
	int high = *max_element(arr.begin(), arr.end());

	while(low <= high){
		int mid = (low + high) / 2;
		long long time = speed(arr,mid);

		if(time <= h) high = mid -1;
		else low = mid + 1;
	}

	return low;
}

int main (){
	int n, h;
	cin >> n;

	vector<int> arr(n);

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	cin >> h;

	cout << minEatingSpeed(arr,h);
}
