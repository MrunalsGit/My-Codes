#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
        
        int r = 0;
        if (x == -pow(2,31)) return 0;
        int y = abs(x);
        while (y>0){
            
            if ((r > INT_MAX/10) || (r < INT_MIN) ) return 0;
            r = (r*10) + y%10;
            y /= 10;
        }
        if(x<0) return -r;
        return r;

    }

int main () {
	
	int n;
	cin >> n;

	cout << reverse(n);
}