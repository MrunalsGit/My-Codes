#include <iostream>
using namespace std;

int main (){

    int n;
    cout << "Enter n = ";
    cin >> n;

    int i = 1;
    while (i <= n){

        int leftspace = n -i;
        while (leftspace){

            cout << " ";
            leftspace -= 1;

        }

        int leftpyramid = i -1;
        int num1 = 1;
        while (leftpyramid){

            cout << num1;
            num1 += 1;
            leftpyramid -= 1;

        }

        cout << i;

        int rightpyramid = i -1;
        int num2 = i -1;
        while (rightpyramid){

            cout << num2;
            num2 -= 1;
            rightpyramid -= 1;

        }

        cout << endl;
        i += 1;
    }
}