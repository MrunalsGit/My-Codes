#include <bits/stdc++.h>
using namespace std;

void revArray(int arr[] , int size){
    int n = size-1;
        for (int i = 0; i < size/2 ; i++){
            int temp = arr[i];
            arr[i] = arr[n];
            arr[n] = temp;
            n--;
        }
        for(int i = 0; i < size ; i++){
            cout << arr[i] << " ";
        }

}

int main(){

    int n;
    cout << "Enter n = ";
    cin >>n;
    int arr[n];

    for (int i = 0; i<n; i++){
        int j;
        cout <<"Enter element = ";
        cin >> j;
        arr[i] = j;
    }

    revArray(arr , n);

}