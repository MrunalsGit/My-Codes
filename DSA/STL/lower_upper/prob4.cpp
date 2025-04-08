#include <bits/stdc++.h>
using namespace std;

int main (){

    int n;
    cout << "ENter n = ";
    cin >> n;
    vector <int> a = {1,4,4,4,4,9,9,10,11};
    int it = upper_bound(a.begin(), a.end(), n)- a.begin();
    if (it >= a.size()){
        cout << "-1";
    }
    else{
        cout << a[it];
    }
}