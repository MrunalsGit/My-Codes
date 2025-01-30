#include <bits/stdc++.h>
using namespace std;

int longestConsSeq(vector <int> &arr){

	unordered_set <int> ans;
	int longest = 0;
	int cnt = 0;

	for(auto it : arr) ans.insert(it);

	for(auto it : ans){
		if (ans.find(it - 1) == ans.end()) {
			cnt = 1;
			int element = it + 1;
			while (ans.find(element) != ans.end()){
				cnt += 1;
				element += 1;
			}
			longest = max(longest, cnt);
		}
		
	}
	return longest;
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

	cout << longestConsSeq(arr);
}