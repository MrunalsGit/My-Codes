#include <iostream>
using namespace std;

int main (){

    int n;
    cout << "Enter n = ";
    cin >> n;

    int i = 1;

    while (i <= n){

        int j = 1;
        int k = i;
        while (j <= i){

            cout << k;
            k += 1;
            j += 1;

        }
        cout << "\n";
        i += 1;
        
    }

}