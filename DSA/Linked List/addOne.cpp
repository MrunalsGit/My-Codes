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

Node* recurAdd1(Node* head){

	if(head == NULL )return head;
	Node* temp = head->next;
	int check = 0;
	if(temp != NULL) check = temp->data;
	Node* front = recurAdd1(temp);
	if(temp == NULL || front->data == 0 && check == 9 ){
		head->data = head->data + 1;
	}
	if (head->data == 10) head->data = 0;
	return head;
	
}

Node* add1(Node* head){
	int check = head->data;
	Node* temp = head;
	Node* newHead = recurAdd1(temp);
	if(check == 9 && newHead->data == 0){
		Node* ans = new Node (1);
		ans->next = newHead;
		return ans;
	}
	return newHead;
}


int main (){
	int n;
	cin >> n;

	vector <int> arr(n,0);

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	

	Node* head = convertToLL(arr);
	
	print (add1(head));
	
	
	
}









