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

Node* deleteKeyDLL (Node* head, int k){

	if(head == NULL ) return head;
	Node* temp = head;
	Node* prevN = NULL;

	while(temp!= NULL ){
		
		if(temp->data == k){
			if(temp == head)head = head->next;
			Node* dup = temp;
			Node* front = temp->next;
			if(prevN)prevN->next = front;
			if(front)front->prev = prevN;
			temp = temp->next;
			delete dup;
		}
		else{
			prevN = temp;
			temp = temp->next;
		}
		
	}
	return head;
}

int main (){
	int n, k;
	cin >> n >> k;
	vector <int> arr(n,0);
	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	Node* head = convertToDLL(arr);
	
	head = deleteKeyDLL (head, k);
	print(head);
}









