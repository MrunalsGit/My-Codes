#include <bits/stdc++.h>
using namespace std;

void nStarTriangle(int n){

    for (int i =0 ; i < n ; i++){

        for (int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    for (int i =0 ; i< n-1; i++){

        for (int j =0; j < n-i-1; j++){
            cout << "*";
        }
        cout << "\n";
    }
}

int main(){

    int n;
    cout << "Enter n = ";
    cin >> n;

    nStarTriangle(n);
}