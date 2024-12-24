#include <iostream>
using namespace std;

int main(){

    cout << "Enter " << endl;
    char a ;
    cin >> a;

    if ((a>= 'a') and (a <= 'z')){
        cout << a << " is a Lower Case alphabet" << endl;
    }
    else if ((a >= 'A') and (a <= 'Z') ){
        cout << a << " is a Upper Case alphabet" <<endl;
    }
    else if ((a >= '0') and (a <= '9')){
        cout << a << " is a Numeric Value" << endl;
    }
    else {
        cout << a << " is neither Lower Case nor Upper Case nor Numeric Value" << endl;
    }

}