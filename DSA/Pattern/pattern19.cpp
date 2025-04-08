#include <iostream>
using namespace std;

int main (){

    int n;
    cout << "Enter n = ";
    cin >> n;

    int i = 1;
    while (i <= n){

        int space = i - 1;
        while (space){

            cout << " ";
            space -= 1;

        }

        int star = i;
        int j = n - i + 1;
        while (j){

            cout << star;
            star += 1;
            j -= 1;

        }
        cout << "\n";
        i += 1;
    }
}