#include <bits/stdc++.h>
using namespace std;


int countSubarrays(vector<int> &arr, int k) {
        int count = 0;
        for (int i=0; i < arr.size(); i++){

                int lim = 0;

                for (int sub = 0 ; sub < arr.size(); sub++){

                        vector <int> subarr;

                        for (int j = i; j<= lim; j++ ){
                                subarr.push_back(arr[j]);
                        }

                        int sum = 0;

                        for (int j = 0; j < subarr.size(); j++){
                                sum += subarr[j];
                        }

                        if (sum == k ) count += 1;
                        lim += 1;
                }               
        }
        return count;
}

int main (){
        int n,k;
        cin >> n;
        vector <int> arr;
        for (int i = 0; i< n; i++){
                int temp;
                cin >> temp;
                arr.push_back(temp);
        }
        cin >> k;

        cout << countSubarrays(arr,k);
}