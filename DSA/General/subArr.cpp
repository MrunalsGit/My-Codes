#include <bits/stdc++.h>
using namespace std;

int main (){
	
	int n,k,count = 0;
	cin >> n;
	vector <int> arr;

	for (int i =0; i <n; i++){
		int j;
		cin >> j;
		arr.push_back(j);

	}
	cin >> k;

	for (int i=0; i < arr.size(); i++){

		int lim = 0;

		for (int sub = 0 ; sub < arr.size(); sub++){

			vector <int> subarr;

			for (int j = i; j<= lim; j++ ){
				subarr.push_back(arr[j]);
			}

			int sum = 0;

			for (int j = 0; j < subarr.size(); j++){
				sum += subarr[j];
			}

			if (sum == k ) count += 1;
			lim += 1;
		}		
	}

	cout << endl <<"Count = " << count;
}