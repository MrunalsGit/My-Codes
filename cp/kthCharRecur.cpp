#include <bits/stdc++.h>
using namespace std;

char kthCharacter(int k , int i = 1, string str = "a"){

	if (str.size() > k) return str[k-1];
	
	for (size_t j = 0; j < pow(2,i-1); j++){

		char ch = str[j] + 1;
		str = str + ch;
	}
	// cout << " * "<< "i = "<< i << endl << str << endl << " * " << endl;
	return kthCharacter(k, ++i, str);

}

int main (){
	
	int k ;
	cin >> k;

	cout << kthCharacter(k);
}