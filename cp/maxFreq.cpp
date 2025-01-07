#include <bits/stdc++.h>
using namespace std;

void maxFreq(vector <int> &nums, int k){
	int s = nums.size();
	for (int i =0; i < s; i++){
		int n = k;
        vector <int> final (s, 0);
        for (int j =i; j < s; j++){
            final[j] = nums[j] + (n-j);
            n -= 1; 
        }
        for (int j =0; j < s ; j++){
        	cout << final[j] << " ";
        }
        cout << endl;
    }
} 

int main (){
	
	int n,k;
	cin >> n;
	vector <int > nums;

	for (int i=0; i < n; i++){
		int temp;
		cin >> temp;
		nums.push_back(temp);
	}

	cin >> k;
	maxFreq(nums, k);

}