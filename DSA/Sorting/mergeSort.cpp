#include <bits/stdc++.h>
using namespace std;

void merge(vector <int>& arr, int low, int mid, int high){
	vector <int> temp;
	int left = low;
	int right = mid+1;
	while (left <= mid && right <= high){
		if(arr[left] <= arr[right]){
			temp.push_back(arr[left]);
			left++;
		}
		else{
			temp.push_back(arr[right]);
			right++;
		}
	}
	while (left <= mid ){
		temp.push_back(arr[left]);
		left++;
	}
	while (right <= high ){
		temp.push_back(arr[right]);
		right++;
	}

	for (int j =low; j <= high; j++){
		arr[j] = temp[j-low];
	}


}

void mergeSort(vector <int>& arr, int low, int high){

	if (low == high) return;
	
	int mid =(low + high)/2;

	mergeSort(arr , low , mid);
	mergeSort(arr, mid+1, high);
	merge(arr, low , mid, high);

}

int main (){
	
	int n;
	cin >> n;

	vector <int > arr;
	for (int i = 0; i < n ; i++){
		int temp;
		cin >> temp;
		arr.push_back(temp);
	}

	mergeSort( arr,0, n-1 );

	for(auto it : arr){
		cout << it << " ";
	}
}


// #include <bits/stdc++.h>
// using namespace std;

// void merge(vector <int> &arr, int l, int m, int h){

// 	int low = l, k = m + 1;
// 	int size = h-l;
// 	vector<int> temp;

// 	while(low <= m && k <= h){
// 		if(arr[low] <= arr[k]){
// 			temp.push_back(arr[low]);
// 			low++;
// 		}
// 		else{
// 			temp.push_back(arr[k]);
// 			k++;
// 		}
// 	}
// 	while(low <= m){
// 		temp.push_back(arr[low]);
// 		low++;	
// 	}
// 	while(k <= h){
// 		temp.push_back(arr[k]);
// 		k++;	
// 	}

// 	for(int i = 0; i <= size; i++){
// 		arr[l] = temp[i];
// 		l++;
// 	}
// }


// void ms(vector <int> &arr, int l , int h ){

// 	if(l >= h) return;
// 	int m = (l + h)/2;

// 	ms(arr,l,m);
// 	ms(arr,m+1,h);

// 	merge(arr,l,m,h);

	
// }
// int main (){
	
// 	int n;
// 	cin >> n;

// 	vector <int> arr;

// 	for (int i =0 ; i < n; i++){
// 		int temp;
// 		cin >> temp;
// 		arr.push_back(temp);
// 	}

// 	ms(arr,0,n-1);

// 	for(auto i : arr) cout << i << " ";

// }s