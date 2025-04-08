#include <iostream>
using namespace std;

int main (){

    int n;
    cout << "Enter n = ";
    cin >> n;

    int i = 1;
    while (i <= n){

        int j = 1;
        while (j <= i){

            char ch = 'A'+ n - 1 - i + 1 + j - 1;
            cout << ch;
            j += 1;

        }
        cout << endl;
        i += 1;
    }
}