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

Node* findNewTail (Node* head, int n){
	n--;
	while(n--){
		head = head->next;
	}
	return head;
}

Node* rotaterightLL(Node* head, int k){
	if(head == NULL || head->next == NULL || k == 0)return head;
	Node* tail = head;
	int len = 1;
	while(tail->next != NULL){
		len++;
		tail = tail->next;
	}
	k = k%len;
	Node* newTail = findNewTail (head, len-k);
	tail->next = head;
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
	
	print( rotaterightLL (head, k));
	
}