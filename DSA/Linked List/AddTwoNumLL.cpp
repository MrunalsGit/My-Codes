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

Node* addTwo(Node* head1, Node* head2){
	
	Node* temp1 = head1;
	Node* temp2 = head2;
	Node* newHead = new Node (-1);
	Node* ans = newHead;
	int carry = 0;
	
	while(temp1 != NULL || temp2 != NULL){
		
		
		int d1 = 0, d2 = 0;
		if(temp1 != NULL) d1 = temp1->data;
		if(temp2 != NULL) {
			d2 = temp2->data;
		}

		Node* temp = new Node (d1 + d2 + carry);

		newHead->next = temp;
		carry= 0;

		if (temp->data > 9){
			temp->data = (temp->data)% 10;
			carry = 1;
		}
		newHead = temp;

		if(temp1 != NULL)temp1 = temp1->next;
		if(temp2 != NULL)temp2 = temp2->next;

		
		
		
		
		if(temp1 == NULL && temp2 == NULL && carry == 1){
			Node* last = new Node (1);
			newHead->next = last;
			return ans->next;
		}
		
	}
	
	return ans->next;
}


int main (){
	int n, m;
	cin >> n >> m;

	vector <int> arr(n,0), arr2(m,0);

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	for(int i = 0; i < m; i++){
		cin >> arr2[i];
	}
	

	Node* head = convertToLL(arr);
	Node* head2 = convertToLL(arr2);
	
	print (addTwo(head, head2));
	// int carry =1;
	// cout << (head->data + head2->data + carry);
	
		
}









