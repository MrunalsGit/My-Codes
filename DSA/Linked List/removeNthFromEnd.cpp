#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node* next;

	Node(int data1){
		data = data1;
		next = nullptr;
	}

	Node(int data1, Node* next1){
		data = data1;
		next = next1;
	}
};

Node* convertToLL(vector <int> arr){
	Node* head = new Node (arr[0]);
	Node* prev = head;

	for(int i = 1; i < arr.size(); i++){
		Node* temp = new Node (arr[i]);
		prev->next = temp;
		prev = temp;
	}
	return head;
}

void print (Node* head){
	Node*temp = head;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
}

Node* removeNthFromEnd(Node* head, int n){

	Node* fast = head;

	for(int i = 0; i < n; i++) fast = fast->next;

	if(fast == NULL) {
		Node* temp = head;
		free(temp);
		return head->next;
	}

	Node* slow = head;

	while(fast->next != NULL){
		slow = slow->next;
		fast = fast->next;
	}

	Node*del = slow->next;
	slow->next = del->next;
	free (del);

	return head;
}



int main (){
	int n;
	cin >> n;

	vector <int> arr(n,0);

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	Node* head = convertToLL(arr);
	print(removeNthFromEnd(head, 2));
	
}