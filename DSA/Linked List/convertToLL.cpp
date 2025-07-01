#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node* next;

	public:
	Node(int data1, Node* next1){
		data = data1;
		next = next1;
	}

	public:
	Node(int data1){
		data = data1;
		next = nullptr;
	}
};

void print(Node* head){
	Node* temp = head;

	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
}

Node* convertToLL(vector<int> arr){
	Node* head = new Node (arr[0]);
	Node* prev = head;

	for(int i = 1; i < arr.size(); i++){
		Node* temp = new Node (arr[i]);
		prev->next = temp;
		prev = temp;
	}

	return head;
}

int main (){
	int n;
	cin >> n;
	vector<int> arr(n,0);

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	Node* head = convertToLL(arr);
	print(head);
	cout << endl;
	cout << head->data;
}