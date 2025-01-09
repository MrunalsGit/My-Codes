#include <bits/stdc++.h>
using namespace std;

void generateTheString(int n ){
	string final = "";
	// if (n %2 == 0){
	// 	final += 'a';
	// 	for (int i =0; i < n-1; i++){
	// 		final += 'b';
	// 	}
	// }
	// else{
	// 	final += 'a';
	// 	if(n == 1) cout << final << endl;
	// 	final += 'b';
	// 	for(int i = 0; i < n-2; i++){
	// 		final += 'c';
	// 	}
	// }

	// cout << endl << "Final = " << final;

	final += 'a';
	if(n % 2 != 0 && n>1) {
		final += 'b';
		n--;
	}
	for (int i = 0; i < n-1; i++){
		final += 'c';
	}

	cout << endl << "Final = " << final;

}

int main (){
	
	int n ;
	cin >> n;

	generateTheString(n);
}