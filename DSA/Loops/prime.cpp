#include <iostream>
using namespace std;

int main(){

    int n ;
    cout << "Enter number = ";
    cin >> n;
    string prime = "True";

    int i = 2;

    if ( n < 2){
        cout << "Not prime ";
    }

    else if (n == 2){
        cout << "Prime";
    }

    else {
        while ( i < n){

            if (n % i == 0){
                prime = "False";
                break;
            }
            i += 1;
        }

        if (prime == "True"){
            cout << "Prime number..";
        }

        else{
            cout << "Not prime";
        }

    }


}