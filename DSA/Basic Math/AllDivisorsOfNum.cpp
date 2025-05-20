#include <bits/stdc++.h>
using namespace std;

void print_divisors(int n){
	set <int> st;
	for(int i =1; i <= sqrt(n) ; i++){
		if(n % i == 0){
			st.insert(i);
			if (i != sqrt(n))st.insert(n/i);
		}
	}
	for(auto i : st){
		cout << i << " ";
	}
}

int main (){
	int n;
	cin >> n;

	print_divisors(n);
}