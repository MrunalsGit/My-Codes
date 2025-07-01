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

Node* findnewTail(Node* head, int k){
	k--;
	while(k--){
		head = head->next;
	}
	return head;
}

Node* rotateLeftLL(Node* head, int k){
	
	if(head == NULL || head->next == NULL || k == 0)return head;
	Node* tail = head;
	int len = 1;
	while(tail->next != NULL){
		len++;
		tail = tail->next;
	}
	k = k%len;
	if(k == 0) return head;
	tail->next = head;
	Node* newTail = findnewTail(head, k);
	head = newTail->next;
	newTail->next = NULL;
	return head;
	
}

int main (){
	int n, k;
	cin >> n >> k;

	vector <int> arr(n,0);

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	Node* head = convertToLL(arr);
	
	print( rotateLeftLL (head, k));
	
}