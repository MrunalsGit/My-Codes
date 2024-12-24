#include <iostream>
using namespace std;

int main () {

    int n ;
    cout << "Enter n = ";
    cin >> n;

    int i = 1;
    while (i <= n){

        int j = 1;
        int s = 1;
        while (j <= n){

            if (s <= n-i){
                cout << " ";
            }
            else {
                cout << "*";
            }
            s += 1;
            j += 1;

            // int space = n -i ;
            // while (space){
            //     cout << " ";
            //     space -= 1;

            // }

            // int j = 1;
            // while (j <= i){

            //     cout << "*";
            //     j += 1;

            // }  

        }
        cout << "\n";
        i += 1;

    }
}
