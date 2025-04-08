#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter n = ";
    cin >> n;

    int i = 0;
    int count = 1;

    while (i < n){

        int j = 0;
        while (j <= i){

            cout << count << " " ;
            count += 1;
            j += 1;

        }
        cout << "\n";
        i += 1;
    }
}