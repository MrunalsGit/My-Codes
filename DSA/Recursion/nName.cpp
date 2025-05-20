#include <bits/stdc++.h>
using namespace std;

void nName(string name , int n){
    if (n < 1) return;
    cout << name << endl;

    nName(name, --n);
}

int main (){
    string name;
    int n;
    cin >> name;
    cin >> n;
    nName(name , n);

}