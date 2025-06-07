#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;

	while(t--){
		int a,b,c,d;
		cin >> a >> b >> c >> d;

		if(b > d) cout << -1;
		else{
			if(c > (a + d - b) ) cout << -1;
			else cout << a - (2*b) - c + (2*d);
		}
		cout << endl;
	}
}
// Prob: We are at (a,b) and need to reach (c,d)
// if standing on point (x,y) either move to point (x+1,y+1) or point (x−1,y)
// count min num of steps
// Sol:
// First reach to the level of d 
// as we only have option to move above
// if(b > d) therefore we can never reach to (c,d)
// else num of steps required to reach (diffY) = d - b 
// steps = diffY
// as we have moved diffY steps up simultaneously a also increased therefore (a + diffY) is new a cordinate
// now we reached level of d, we can only move back ward as if we move forward our y cordinate will also increase
// therefore if(c > (a + diffY)) therefore in this case we can never reach (c,d)
// else more steps required to reach (c,d) = (a + diffY) - c
// steps = (diffY) + (a + diffY - c)
// put diffY = d - b
// steps = (d - b) + (a + (d - b) - c)
// steps = a - 2b - c + 2d  
