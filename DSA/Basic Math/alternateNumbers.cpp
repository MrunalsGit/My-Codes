#include <bits/stdc++.h>
using namespace std;

vector <int> alternateNumbers(vector<int> &a){
	int n = a.size();
	vector <int> ans(n,0);
	int pos = 0, neg = 1;
	for(int i = 0; i < a.size(); i++){
		if(a[i] > 0) {
			ans[pos] = a[i];
			pos += 2;
		}
		else {
			ans[neg]= a[i];
			neg += 2;
		}
	}
	return ans;
}

int main(){
	int n;
	cin >> n;

	vector <int> arr;
	for(int i =0; i < n; i++){
		int temp;
		 cin >> temp;
		 arr.push_back(temp);
	}

	vector <int> ans;
	ans = alternateNumbers(arr);

	for(auto it : ans) cout << it << " ";
}