#include <bits/stdc++.h>
using namespace std;

// int factN(int n, int fact){
//     if (n == 0) return fact;

//     factN(n-1, fact*n);

// }

// int main (){

//     int n,fact= 1;
//     cin >> n;

//     cout << factN(n, fact);
// }


int recur(int n){
    if(n <= 1) return 1;
    return n*recur(n-1);
}

int main (){
    int n;
    cin >> n;

    cout <<recur(n);
}