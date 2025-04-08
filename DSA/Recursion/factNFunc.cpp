#include <bits/stdc++.h>
using namespace std;

int factNFunc(int n){

    if (n == 1) return 1;
    if (n == 0) return 2;
    return n * factNFunc(n-1);
}

int main (){

    int n;
    cout << "Enter n = ";
    cin >> n;

    cout << factNFunc(n);
}