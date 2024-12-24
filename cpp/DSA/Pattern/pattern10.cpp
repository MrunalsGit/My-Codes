#include <iostream>
using namespace std;

int main (){

    int n;
    cout << "Enter n";
    cin >> n;

    int i = 1;
    char k = 65;

    while (i <= n){

        int j = 1;
        
        while (j <= n){

            cout << k ;
            // char ch = "A" + i - 1;
            // cout << ch;
            j += 1;

        }
        k += 1;
        cout << endl;
        i += 1;
    }
}