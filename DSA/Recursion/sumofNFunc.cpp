#include <bits/stdc++.h>
using namespace std;

int sumofNFunc(int n){

    if (n == 0) return 0;

    return n + sumofNFunc(n-1);
}

int main (){

    int n;
    cout << "Enter n = ";
    cin >> n;

    cout << sumofNFunc(n);
}