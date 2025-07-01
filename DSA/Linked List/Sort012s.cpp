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

Node* sort012 (Node* head){
	
	if(head == NULL || head->next == NULL) return head;
	Node* oneHead = new Node (-1);
	Node* twoHead = new Node (-1);
	Node* zeroHead = new Node (-1);
	Node* zero = zeroHead;
	Node* one = oneHead;
	Node* two = twoHead;
	
	Node* temp = head;
	
	while(temp != NULL){
		if(temp->data == 1){
			one->next = temp;
			one = temp;
		}
		else if (temp->data == 2){
			two->next = temp;
			two = temp;
		}
		else {
			zero->next = temp;
			zero = temp;
		}
		temp = temp->next;
	}
	zero->next = (oneHead->next)? oneHead->next : twoHead->next;
	one->next = twoHead->next;
	two->next = NULL;
	Node* ans = zeroHead->next;
	delete zeroHead;
	delete oneHead;
	delete twoHead;
	
	return ans;
}


int main (){
	int n;
	cin >> n;

	vector <int> arr(n,0);

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	Node* head = convertToLL(arr);
	print(sort012(head));
	
}