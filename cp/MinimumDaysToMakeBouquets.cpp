#include <bits/stdc++.h>
using namespace std;

bool possible(vector<int> bloomsDay, int mid, int m, int k){

	int cnt = 0, ans = 0;
	for(int i = 0; i < bloomsDay.size(); i++){
		if(bloomsDay[i] <= mid){
			cnt++;
		}
		else{
			ans += cnt/k;
			cnt = 0;
		}
	}

	ans += cnt/k;

	if(ans >= m) return true;
	return false;
}

int minDays(vector<int> bloomsDay, int m, int k){

	int low = *min_element(bloomsDay.begin(), bloomsDay.end());
	int high = *max_element(bloomsDay.begin(), bloomsDay.end());
	int ans=0;

	while(low <= high){
		int mid = (low+high) / 2;

		int check = possible(bloomsDay, mid, m, k);
		if(check ){
			ans = mid;
			high = mid -1;
		}
		else{
			low = mid + 1;
		}
	}
	if(ans>0) return ans;
	return -1;

}

int main (){
	int n,m,k;
	cin >> n;

	vector<int> bloomsDay(n);

	for(int i =0; i < n; i++){
		cin >> bloomsDay[i];
	}
	cin >> m >> k;

	cout << minDays(bloomsDay,m,k);
}