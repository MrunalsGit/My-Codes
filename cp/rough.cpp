#include <bits/stdc++.h>
using namespace std;


int main (){
	
    int n;
    cin >> n;

    for (int i=1;i<= 2*n-1;i++) {
        for (int j=1; j<=2*n-1;j++) {
            int ele = n;
            for (int k=1;k<=n;k++) {
                if (i==k || j==k || i==2*n-k || j==2*n-k) {
                    cout << ele << " ";
                    break;
                }
                ele--;
            }
        }
        cout << "\n";
    }
 

	
}