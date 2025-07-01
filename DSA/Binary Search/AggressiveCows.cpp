#include <bits/stdc++.h>
using namespace std;

bool canWePlace (vector <int> arr, int dist, int k ){

	int prev = arr[0], cnt = 1;	
	for(int i = 1; i < arr.size(); i++){

		if (  (arr[i] - prev)  >= dist  ){
			prev = arr[i];
			cnt ++;
		}
		if (cnt >= k)return 1;
	}
	
	return 0;
}

int aggressiveCows(vector <int> arr, int k){
	
	sort(arr.begin(), arr.end());
	int low = 1, high = arr[arr.size()-1];

	while(low <= high){
		
		int mid = (low + high) / 2;
		if (canWePlace(arr,mid,k)) low = mid + 1;
		else high = mid - 1;
	}
	return high;

}

int main (){
	int n, m;
	cin >> n;

	vector<int> arr(n);

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	cin >> m;

	cout << aggressiveCows(arr,m);
}
