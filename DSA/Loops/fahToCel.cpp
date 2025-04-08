#include <iostream>
using namespace std;

int main (){

    int f;

    cout << "Enter temp in fahrenhiet = ";
    cin >> f ;

    int c = (f - 32)*(5.0/9.0);

    cout << "In celsius = "<< c;

}