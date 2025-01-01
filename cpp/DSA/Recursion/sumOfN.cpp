#include <bits/stdc++.h>
using namespace std;

int sum = 0;
int sumOfN(int i , int n){

    if (i > n) return sum;

    i++;
    sum += i-1;
    sumOfN(i , n);
    
    

}

int main (){

    int n, i = 1;
    cout << "Enter n = ";
    cin >> n;

    cout << sumOfN(i, n);
}