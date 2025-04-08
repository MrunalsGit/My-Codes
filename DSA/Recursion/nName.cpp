#include <bits/stdc++.h>
using namespace std;
int i = 0;
void nName(string name , int n){
    if (i == n) return;
    cout << name << endl;
    i ++;
    nName(name , n);
}

int main (){
    string name;
    int n;
    cout << "Enter name = ";
    cin >> name;
    cout << "Enter n = ";
    cin >> n;
    nName(name , n);

}