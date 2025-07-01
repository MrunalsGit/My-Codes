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
	Node* sec = nullptr;

	for(int i = 1; i < arr.size(); i++){
		Node* temp = new Node (arr[i]);
		if(i == 3){
			sec = temp;
		}
		prev->next = temp;
		prev = temp;
	}
	// prev->next = head;
	// prev->next = sec;
	return head;
}

void print (Node* head){
	Node*temp = head;

	// for(int i = 0; i < 10; i++){
	// 	cout << temp->data << " ";
	// 	temp = temp->next;
	// }

	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
}

Node* reverseLL(Node* head){
	
	Node* prev = NULL;
	Node* temp = head;

	while(temp != NULL){
		Node* front = temp->next;
		temp->next = prev;
		prev = temp;
		temp = front;
	}
	return prev;
}

bool isLLPalindrome(Node* head){
	Node* slow = head;
	Node* fast = head;
	while(fast->next != NULL && fast->next->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
	}

	Node* newHead = reverseLL(slow->next);

	Node* first = head;
	Node* second = newHead;

	while(second != NULL){
		if(first->data != second->data){
			reverseLL(newHead);
			return false;
		}
		first = first->next;
		second = second->next;
	}

	reverseLL(newHead);
	return true;

}


int main (){
	int n;
	cin >> n;

	vector <int> arr(n,0);

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	

	Node* head = convertToLL(arr);
	
	cout << isLLPalindrome(head);

}