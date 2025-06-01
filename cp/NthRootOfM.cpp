#include <bits/stdc++.h>
using namespace std;

int power(int mid, int n, int m){

	long long ans = 1;
	while(n > 0){
		if(n % 2 == 1){
			ans *= mid;
			if(ans > m) return 2;
		}
		mid *= mid;
		n /= 2;
	}
	if(ans < m) return 1;
	return 0;
	
}

int NthRootOfM(int n, int m){
	int low = 1;
	int high = m;

	while(low <= high){
		int mid = (low + high)/ 2;
		int check = power(mid, n, m);
		if(check == 2) high = mid -1;
		else if (check == 1) low = mid + 1;
		else return mid;
	}
	return -1;
}

int main (){
	
	int n,m;
	cin >> n >> m;

	cout << NthRootOfM(n,m) << endl;
}