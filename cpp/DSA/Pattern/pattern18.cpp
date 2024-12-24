#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter n = ";
    cin >> n;

    int i = 1;
    while (i <= n){

        int space = n - i;
        while (space){

            cout << " ";
            space -= 1;

        }

        int num = i;
        while (num ){

            cout << i;
            num -= 1;
        }
        cout << "\n";
        i += 1;
    }
}