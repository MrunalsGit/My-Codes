#include <bits/stdc++.h>
using namespace std;

vector <int> majorityElemNby3(vector <int> &arr){
	int cnt1 = 0, cnt2 = 0;
	int elem1 = INT_MIN, elem2 = INT_MIN;

	for(int i = 0; i < arr.size(); i++){
		if(cnt1 == 0 && arr[i] != elem2){
			cnt1 ++;
			elem1 = arr[i];
		}
		else if (cnt2 ==0 && elem1 != arr[i]){
			cnt2 ++;
			elem2 = arr[i];
		}
		else if (arr[i] == elem1) cnt1++;
		else if (elem2 == arr[i]) cnt2++;
		else cnt1--, cnt2--;
	}
	vector <int> ls;
	cnt1 = 0, cnt2 = 0;
	for(int i = 0; i < arr.size(); i++){
		if(elem1 == arr[i]) cnt1 ++;
		else if (elem2 == arr[i]) cnt2 ++;
	}
	int minm = int(arr.size()/3 +1);

	if(cnt1 >= minm) ls.push_back(elem1);
	if(cnt2 >= minm) ls.push_back(elem2);

	return ls;
}

int main (){
	int n;
	cin >> n;

	vector <int> arr;

	for(int i =0; i <n; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	vector<int> ans;

	ans = majorityElemNby3(arr);

	for(auto it : ans) cout << it << " ";
}