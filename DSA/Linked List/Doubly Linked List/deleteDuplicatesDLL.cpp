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

Node* deleteDuplicatesDLL(Node* head){
	if(head == NULL || head->next == NULL)return head;

	Node* temp = head->next;
	Node* prevN = head;

	while(temp != NULL){

		while(temp != NULL && temp->data == prevN->data){
			Node* dup = temp;
			temp = temp->next;
			delete dup;
		}
		prevN->next = temp;
		if(temp != NULL)temp->prev = prevN;
		prevN = temp;
		if(temp != NULL)temp = temp->next;
	}
	return head;
}

int main (){
	int n;
	cin >> n;
	vector <int> arr(n,0);
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	Node* head = convertToDLL(arr);
	
	head = deleteDuplicatesDLL (head);
	print(head);
}









