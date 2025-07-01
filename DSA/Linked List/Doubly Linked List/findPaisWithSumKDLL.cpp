#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
	Node* prev;
	
	Node(int data1, Node* next1, Node* prev1){
		data = data1;
		next = next1;
		prev = prev1;
	}
	
	Node(int data1){
		data = data1;
		next = NULL;
		prev = NULL;
	}
};

Node* convertToDLL(vector <int> arr){
	Node* head = new Node (arr[0]);
	Node* temp = head;
	
	for(int i = 1; i < arr.size(); i++){
		Node* curr = new Node (arr[i]);
		temp->next = curr;
		curr->prev = temp;
		temp = curr;
	}
	return head;
}

void print(Node* head){
	Node* temp = head;
	while(temp!= NULL){
		// if(temp->prev != NULL)cout << temp->prev->data << " ";
		// else cout << "  ";
		cout << temp->data << " ";
		// if(temp->next != NULL)cout << temp->next->data;
		// cout << "\n";
		temp = temp->next;
	}
	cout << "\n";
}

Node* findTail(Node* head){
	if(head == NULL) return head;
	Node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	return temp;
}

vector<pair<int, int>> findPairsDLL (Node* head, int k){

	Node* left = head;
	Node* right = findTail(head);
	vector<pair<int,int>> arr;
	while(left->data < right->data){
		if(left->data + right->data == k){
			arr.push_back({left->data, right->data});
			left = left->next;
			right = right->prev;
		}
		else if(left->data + right->data <= k) left = left->next;
		else right = right->prev;
	}
	return arr;
}

int main (){
	int n, k;
	cin >> n >> k;
	vector <int> arr(n,0);
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	Node* head = convertToDLL(arr);
	vector <pair<int,int>> arr1;
	arr1 = findPairsDLL (head, k);
	
	for(auto i : arr1) cout << i.first << " " << i.second << "\n";
}









