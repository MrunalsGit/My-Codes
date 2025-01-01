#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter n = ";
    cin >> n;
    vector <int> arr = {1,4,4,4,4,9,9,10,11};
    int it = lower_bound(arr.begin(),arr.end(),n)-arr.begin();
    

    if ( n != arr[it]){
        cout << "-1" ;
    }
    else{
        cout << "Found";
    }
}