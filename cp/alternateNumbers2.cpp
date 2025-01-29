#include <bits/stdc++.h>
using namespace std;

vector <int> alternateNumbers2 (vector <int> a){
	int n = a.size();
	vector <int> pos,neg;
	for(int i =0; i < n; i++){
		if(a[i] > 0) {
			pos.push_back(a[i]);
		}
		else neg.push_back(a[i]);
	}

	if(pos.size() > neg.size()){
		for(int i =0; i < neg.size() ; i++){
			a[2*i] = pos[i];
			a[2*i + 1] = neg[i];
		}
		int index = 2 * neg.size();

		for(int i = neg.size(); i < pos.size(); i++){
			a[index] = pos[i];
			index++;
		}
	}
	else{
		for(int i =0; i < pos.size(); i++){
			a[2*i] = pos[i];
			a[2*i + 1] = neg[i];
		}
		int index = 2* pos.size();
		for(int i = pos.size(); i < neg.size(); i++){
			a[index] = pos[i];
			index++;
		}
	}
	return a;
}

int main () {
	int n;
	cin >> n;

	vector <int> arr;
	for(int i =0;i <n; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	vector <int> ans;
	ans = alternateNumbers2(arr);

	for (auto it : ans) cout << it << " ";
}