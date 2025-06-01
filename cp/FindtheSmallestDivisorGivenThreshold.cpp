#include <bits/stdc++.h>
using namespace std;

int smallestDivisor(vector <int> arr, int limit){

	if(limit < arr.size()) return -1;

	int low = 1, high= *max_element(arr.begin(), arr.end());

	while(low <= high){
		int mid = (low+ high)/ 2;
		int sum = 0;

		for(int i = 0;i < arr.size(); i++){
			sum += ceil(double(arr[i]) / mid);
		}
		cout << "mid " << mid << " sum " << sum << endl;
		if (sum <= limit) high = mid - 1;
		else low = mid + 1;
	}
	return low;
}

int main (){
	int n, limit;
	cin >> n;

	vector<int> arr(n);

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	cin >> limit;

	cout << smallestDivisor(arr,limit);
}
