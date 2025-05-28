#include <bits/stdc++.h>
using namespace std;

void revArray(vector <int> & arr, int i, int size ){

    int n = size-1;

    if (i == arr.size()/2){
        for (int j = 0; j< arr.size(); j++){
            cout << arr[j]<<" ";

        }
        return;
    }

    int temp = arr[i];
    arr[i] = arr[n];
    arr[n] = temp;

    revArray(arr, ++i ,--size);
}

int main (){

    int size, i=0;
    cin >> size;
    int arr1[size];
    

    for (int j =0; j < size; j++){
        int k;
        cin >> k ;
        arr1[j] = k;
    }

    vector<int > arr(arr1, arr1+ size);

    revArray(arr, i, size);
}