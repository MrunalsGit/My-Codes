#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    for (int i =0; i< 3*n - n - 1 ; i++){

        if(i == 3*n - n -2){
            for (int j =0; j < 3*n - n - 1; j++){
                cout << n;
            }
        }
        else if (i == n-1){
            int mid = n;
            for (int j =0; j < 3*n - n - 1; j++ ){
                cout << mid;
                if( j < n-1){
                    mid--;
                }
                else{
                    mid++;
                }
            }
        }
        else if (i == 0){
            for (int j =0; j < 3*n - n - 1; j++){
                cout << n;
            }
        }
        else{
            int start = n;
            int mid = 3*n - n - 3 -2*i;
            int lim = 1;

            int lim2 = (2*i) - (2*n) + 1;

            if (i >= 0 && i <= n-1){  
                for (int j =0 ; j < i+1 ; j++){
                    cout << start;
                    start -= 1;
                }start++;
                for (int j =0; j < mid; j++ ){
                    cout << start;
                }
                for (int j =0; j < i+1 ; j++){
                    cout << start;
                    start += 1;
                }
            }
            else{
                for (int j = 0 ; j <= (2*n) - i -2; j++){
                    cout << start;
                    start -= 1;
                }start+=1;
                for (int j =0; j <= lim2 ; j++){
                    cout << start;
                }start++;
                for (int j = 0 ; j < (2*n) - i -2; j++){
                    cout << start;
                    start += 1;
                }
                
            }

            } 

        cout<< "\n";
    }
}

int main (){

    int n;
    cout << "Enter n = ";
    cin >> n;

    pattern(n);
}