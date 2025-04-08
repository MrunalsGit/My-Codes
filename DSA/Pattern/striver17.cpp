#include <bits/stdc++.h>
using namespace std;

void alphaHill(int n){

    for (int i =0; i < n ; i++){

        for (int j =0 ; j < n - i-1; j++){
            cout << "  ";
        }
        for (char ch = 'A'; ch <= 'A'+i; ch++){
            cout << ch<< " ";
        }
        
        for (char ch = '@'+i; ch >= 'A'; ch--){
            cout << ch << " ";
        }
        cout << "\n";
    }
}

int main (){

    int n;
    cout << "Enter n = ";
    cin >> n;

    alphaHill(n);
}