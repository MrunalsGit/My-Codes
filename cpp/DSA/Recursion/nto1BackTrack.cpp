#include <bits/stdc++.h> 
using namespace std;

void nto1BackTrack(int n, int i){

    if (i > n ) return;
    i++;
    nto1BackTrack(n , i);
    cout << i-1 << " ";
}

int main (){

    int n, i = 1;
    cout << "Enter n = ";
    cin >> n;

    nto1BackTrack(n , i);
}