#include <bits/stdc++.h>
using namespace std;

void nstar(int n){

    for (int i=0 ; i < n; i++){

        for (int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        
        for (int k= 0; k < 2*i + 1; k++){
            cout << "*";
        }
        
        for (int m = 0; m < n-1; m++){

            cout << " ";
        }
        cout << "\n";
    }

    for (int i = 0; i < n ; i++){

        for (int j = 0; j < i ; j++){
            cout << " ";
        }
        for (int j = 0; j < 2*n -(2*i) -1; j ++){
            cout << "*";
        }
        for (int j =0; j < i ; j++){
            cout << " ";
        }
        cout << "\n";



    }
}

int main () {

    int n;
    cout << "Enter n = ";
    cin >> n;
    nstar(n);

}