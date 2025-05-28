#include <bits/stdc++.h>
using namespace std;

int lineTrip(int arr[], int x){
	int ans = 0, cnt = 0;

	for(int i = 1; i <= 2*x; i++){
		cnt+= 1;
		ans = max(ans,cnt);
		
		if(arr[i] > 0) cnt = 0;
	}
	return ans;
}

int main () {

	int k;
	cin >> k;

	for(int j = 0; j < k; j++){

		int n, x;
		cin >> n >> x;
		int arr[2*x+1] = {0};
	
		for(int i = 0; i < n; i++){
			int temp;
			cin >> temp;
			arr[temp]++;
			arr[2 * x - temp]++;
		}

		
	
		cout << lineTrip(arr,x) << endl;
	}
}
