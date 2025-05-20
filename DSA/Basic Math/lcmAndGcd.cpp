#include <bits/stdc++.h>
using namespace std;

vector<int> lcmAndGcd(int a, int b) {
 
    vector <int> ans;

    int lcm = a*b;
    int maxm = max(a,b);
    int minm = min(a,b);

    for (int i =1; i < minm; i++){
    	int found =0;
    	for (int j = 1; j < maxm ; j++){
    		if (maxm*i == minm*j){
    			lcm = maxm*i;
    			found = 1;
    			break;
    		}
    	}
    	if(found > 0) break;

    }
    ans.push_back(lcm);

    int n1 = a, n2 = b;
    
    int gcd = 1;
    
    while (n1 > 0 && n2 > 0){
        if (n1 > n2) n1 = n1 % n2;
        else n2 = n2 % n1;
    }
    
    if (n1 == 0) gcd = n2;
    else gcd = n1;
    
	ans.push_back(gcd);

    return ans;
}

int main () {
	
	int a,b;
	cin >> a >> b;

	lcmAndGcd(a,b);
}