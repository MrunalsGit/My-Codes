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

Node* segregateOddEvenPosi(Node* head){

	if(head == NULL || head->next == NULL )return head;
	Node* odd = head;
	Node* even = head->next;
	Node* evenHead = head->next;

	while(odd->next != NULL && even->next != NULL){
		odd->next = odd->next->next;
		even->next = even->next->next;

		odd = odd->next;
		even = even->next;
	}
	odd->next = evenHead;

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
	print(segregateOddEvenPosi(head));
	
}