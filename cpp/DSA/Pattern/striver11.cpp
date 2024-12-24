#include <bits/stdc++.h>
using namespace std;

void nBinaryTriangle(int n){

    for (int i = 0 ; i<n ; i++){

        for (int j = 0; j <= i ; j++){

            if (i%2 == 0){
                if (j%2==0){
                    cout << "1";
                }else{
                    cout << "0";
                }
            }else {
                if (j%2==0){
                    cout << "0";
                }else{
                    cout << "1";
                }
            }
        }
        cout << "\n";
    }
}

int main (){
    int n;
    cout <<"Enter n = ";
    cin >> n;

    nBinaryTriangle(n);

}