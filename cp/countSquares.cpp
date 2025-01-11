#include <bits/stdc++.h>
using namespace std;

int countSquares(int n ,int i = 0, int count =0){
	int temp = i*i;
	if (temp >= n) return count-1;
	return countSquares(n, i+1, count+1);
}

int main (){
	
	int n;
	cin >> n;

	cout << countSquares(n);
}