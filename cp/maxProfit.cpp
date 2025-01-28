#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector <int> & prices){
	int min = prices[0];
	int maxProfit = 0;
	for (int i = 0; i < prices.size(); i++){
		if(prices[i] < min) min = prices[i];

		int profit = prices[i] - min;

		maxProfit = max(maxProfit, profit);
	}
	return maxProfit;
}

int main () {
	int n;
	cin >> n;

	vector <int> arr;
	for (int i = 0; i < n; i ++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	cout << maxProfit(arr);
}