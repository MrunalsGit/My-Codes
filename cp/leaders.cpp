#include <bits/stdc++.h>
using namespace std;

vector <int> leaders(vector <int> &arr){
	vector <int> ans;
	int maxm = INT_MIN;
	int n= arr.size();
	for(int i = n-1; i >= 0; i--){
		if(arr[i] >= maxm){
			maxm = arr[i];
			ans.push_back(arr[i]);
		}
	}

	return ans;
}

int main () {
	int n;
	cin >> n;

	vector <int> arr;
	for(int i =0; i < n; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	vector <int> ans = leaders(arr);

	for(auto it : ans) cout << it << " ";
}