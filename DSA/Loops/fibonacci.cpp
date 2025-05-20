#include <iostream>
using namespace std;

int main (){

    int n ;
    cin >> n;

    int num1 = 0;
    int num2 = 1;
    int fibo = 0;
    if (n == 1){

        cout << num1;
    }else if (n == 2){

        cout << num1 << " " << num2 << endl;
    }else if (n >2){

        cout << num1 << " " << num2 << " ";

        for (int i =0; i< n-2; i++){

            fibo = num1+num2;
            cout << fibo << " ";
            num1 = num2;
            num2 = fibo;

        }
    }
}