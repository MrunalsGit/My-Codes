#include <iostream>
using namespace std;

int main(){

    int i = 1;
    int a;
    cout << "Enter number" << endl;
    cin >> a;
    int sum = 0;

    while (i<= a){
        sum = sum + i;
        i += 1;
    }

    cout << sum << " is the sum from 1 till " << a << endl;

}