#include <bits/stdc++.h>
using namespace std;

vector<int> sortArrayByParity(vector<int>& nums) {
        int n = nums.size();
        for(int i = n; i>0; i--) {
            int didSwap = 0;
            for (int j =0; j < i-1; j++){
                if(nums[j] % 2 != 0  && nums[j+1] % 2 == 0){
                    int temp = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = temp;
                    didSwap = 1;
                }
            }
            if(didSwap == 0) break;
        }
        return nums;
    }

int main(){
	
	int n;
	cin >> n;

	vector <int> nums;

	for (int i =0; i < n; i++){
		int temp;
		cin >> temp;
		nums.push_back(temp);
	}

	vector <int> nums2 = sortArrayByParity(nums);

	for (int i=0; i < n ; i++) cout << nums[i] << " ";


}