#include <bits/stdc++.h>
using namespace std;

void numberCrown(int n){

    for (int i =0; i < n ; i ++){
        int s = 1;
        for (int j =0; j<= i; j++){
            cout << s;
            s+=1;
        }
        for (int j =0; j < n-i-1; j ++){
            cout << " ";
        }
        for (int j =0; j<n-i-2; j++){
            cout << " ";
        }
        s = i+1;
        for (int j = 0; j <= i; j++){
            cout << s;
            s-=1;
        }
        cout << "\n";
    }
}
int main(){

    int n;
    cout << "Enter n = ";
    cin >> n;

    numberCrown(n);
}