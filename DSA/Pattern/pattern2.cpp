#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter n = ";
    cin >> n;

    int i = 1;

    while ( i <= n){

        int j = 0;
        while ( j < n){

            cout << i;
            j += 1;

        }
        cout << "\n";
        i += 1;


    }
}