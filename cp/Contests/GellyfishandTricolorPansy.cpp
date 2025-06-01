#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;

	for(int j =0; j < t; j++){

		vector <int> arr(4,0);

		for(int i = 0; i < 4; i++){
			cin >> arr[i];
		}

		int minm = *min_element(arr.begin(), arr.end());

		if(minm == arr[3] || minm == arr[1]) cout << "Gellyfish" << endl;
		else cout << "Flower" << endl;

		// if(a <= 0) cout << "Flower" << endl;
		// else cout << "Gellyfish" << endl;
	}
}

// Flower
// Gellyfish
// Flower
// Gellyfish
// Gellyfish
