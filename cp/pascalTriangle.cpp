#include <bits/stdc++.h>
using namespace std;

vector <int> generateRow (int row){

	vector <int> ret;

	long long res = 1;
	ret.push_back(res);

	for(int i = 1; i < row; i++){

		res = res* (row - i);
		res /= i;
		ret.push_back(res);
	}

	return ret;
}

vector < vector <int> > pascalTriangle (int n){

	vector <vector<int>> ans;
	
	for(int i = 1; i <= n; i++){
		ans.push_back(generateRow(i));
	}

	return ans;
}

int main(){
	int n;
	cin >> n;

	vector < vector <int> > arr;

	arr = pascalTriangle(n);

	for(int i = 0; i < n; i++){
		for(int j = 0; j < arr[i].size(); j++){
			cout << arr[i][j];
		}
		cout << endl;
	}
}