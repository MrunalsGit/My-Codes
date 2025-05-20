#include <bits/stdc++.h>
using namespace std;

int main (){

    int n;
    cout << "Enter n = ";
    cin >> n;
    vector <int> a = {1,4,4,4,4,9,9,10,11};
    int in = upper_bound(a.begin(),a.end(),n)-a.begin();

    if (a[in-1] == n ){
        cout << in-1;
    }
    else{
        cout << "-5";
    }
}