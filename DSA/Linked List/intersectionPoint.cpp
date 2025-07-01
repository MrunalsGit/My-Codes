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

Node* convertToYLL(vector <int> arr, int p, Node* head){
	Node* head2 = new Node (arr[0]);
	Node* prev = head2;

	for(int i = 1; i < arr.size(); i++){
		Node* temp = new Node (arr[i]);
		prev->next = temp;
		prev = temp;
	}
	
	Node* temp2 = head;
	for(int i = 1;i < p; i++) temp2 = temp2->next;

	prev->next = temp2;

	return head2;
}

void print (Node* head){
	Node*temp = head;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
}

Node* intersectionPoint (Node* head1, Node* head2){
	
	if(head1 == NULL || head2 == NULL) return NULL;
	Node* temp1 = head1;
	Node* temp2 = head2;
	
	while(temp1 != temp2){
		
		temp1 = temp1->next;
		temp2 = temp2->next;

		if(temp1 == temp2) return temp1;
		
		if(temp1 == NULL) temp1 = head2;
		if(temp2 == NULL) temp2 = head1;
	}
	
	return temp1;
}

int main (){
	int n, m, p;
	cin >> n >> m >> p;

	vector <int> arr(n,0), arr2(m,0);

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	
	for(int i = 0; i < m; i++){
		cin >> arr2[i];
	}

	Node* head2 = convertToLL(arr2);
	Node* head = convertToYLL(arr, p, head2);
	
	Node* ans = intersectionPoint(head, head2);
	cout << ans->data;
	
}