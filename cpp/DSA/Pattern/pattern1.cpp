#include <iostream>
using namespace std;

int main (){

    int n;
    cout << "Enter number = ";
    cin >> n;

    int i = 0;
    

    while (i < n){
        int j = 0;
        while (j < n){

            cout << i;
            j += 1;

        }
        cout << "\n";
        i += 1;

    }
}