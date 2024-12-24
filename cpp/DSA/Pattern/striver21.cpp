#include <bits/stdc++.h>
using namespace std;

void getStarPattern(int n){

    for (int i=0; i<n ; i++ ){

        if (i == 0){
            for (int j=0; j<n; j++){
                cout << "*";
            }
        }
        else if (i == n-1){
            for (int j=0; j<n; j++){
                cout << "*";
            }
        }
        else{
            cout << "*";
            for (int j=0; j< n-2; j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << "\n";

    }
}

int main (){

    int n;
    cout << "Enter n = ";
    cin >> n;

    getStarPattern(n);
}