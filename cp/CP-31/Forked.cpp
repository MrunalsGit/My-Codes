#include <bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin >> t;

	while(t--){
		int a,b, kx, ky, qx, qy;
		cin >> a >> b >> kx >> ky >> qx >> qy;


		set <pair <int,int>> st, st2;

		st.insert({kx+a, ky+b});
		st.insert({kx+a, ky-b});
		st.insert({kx-a, ky+b});
		st.insert({kx-a, ky-b});
		st.insert({kx+b, ky+a});
		st.insert({kx+b, ky-a});
		st.insert({kx-b, ky+a});
		st.insert({kx-b, ky-a});

		st2.insert({qx+a, qy+b});
		st2.insert({qx+a, qy-b});
		st2.insert({qx-a, qy+b});
		st2.insert({qx-a, qy-b});
		st2.insert({qx+b, qy+a});
		st2.insert({qx+b, qy-a});
		st2.insert({qx-b, qy+a});
		st2.insert({qx-b, qy-a});

		int cnt = 0;

		for(auto i : st2){
			if( st.find(i)  != st.end()) cnt++;
		}

		cout << cnt << endl;

	}
}


// 2
// 1
// 2
// 0
