#include <bits/stdc++.h>
using namespace std;

int factN(int n, int fact){
    if (n == 0) return fact;

    factN(n-1, fact*n);

}

int main (){

    int n,fact= 1;
    cout << "Enter n = ";
    cin >> n;

    cout << factN(n, fact);
}