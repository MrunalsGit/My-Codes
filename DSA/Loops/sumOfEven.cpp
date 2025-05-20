#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int sum = 0;
    int j = 2;

    while (n--){

        sum += j;
        j += 2;

    }

    cout << "Your sum = " << sum << endl;

}