#include <iostream>
using namespace std;

int main (){

    int n;
    cout << "Enter n = ";
    cin >> n;

    int i = 1;
    while ( i <= n){

        int j = 1;
        int k = i;
        while (j <= i){

            cout << k;
            // cout << i - j + 1;
            k -= 1;
            j += 1;

        }
        cout << endl;
        i += 1;
    }
}