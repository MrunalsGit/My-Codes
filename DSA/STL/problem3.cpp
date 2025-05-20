#include <bits/stdc++.h>
using namespace std;

int main (){

    int n;
    cout << "Enter n = ";
    cin >> n;
    vector <int> a = {1,4,4,4,4,9,9,10,11};
    int it = lower_bound(a.begin() , a.end() , n) - a.begin();

    if ( it >0 &&a[it] == n){
        cout << a[it-1];
    }
    else{
        cout << "-1";
    }

}