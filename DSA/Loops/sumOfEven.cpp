#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter number = " << endl;
    cin >> n;

    int sum = 0;
    int i = 0;
    int j = 2;

    while (i < n){

        sum += j;
        j += 2;
        i += 1;

    }

    cout << "Your sum = " << sum << endl;

}