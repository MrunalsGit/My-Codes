#include <iostream>
using namespace std;

int main (){

    int n;
    cin >> n;
    string ifprime = "True";

    for (int i =2 ; i < n;i++ ){

        if (n % i == 0){

            ifprime = "False";
            cout << "Not prime";
            break;
        }
    }
    if (n == 0 || n == 1){

        cout << "Not Prime";
    }
    else if (ifprime == "True" && n >= 2  ) {

        cout << "Prime num";
    }
}