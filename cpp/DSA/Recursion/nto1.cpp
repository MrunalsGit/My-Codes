#include <bits/stdc++.h>
using namespace std;

void nto1(int n){

    if (n <1) return;
    cout << n << " ";
    n--;
    nto1(n);
}

int main (){

    int n;
    cout << "Enter n = ";
    cin >> n;

    nto1(n);
}