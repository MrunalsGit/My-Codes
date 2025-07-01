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

Node* findMiddle(Node* head){
	if(head == NULL || head->next == NULL) return head;
	Node* fast = head;
	Node* slow = head;
	fast = head->next->next;
	slow = slow->next;
	
	while(fast != NULL && fast->next != NULL && fast->next->next != NULL){
		slow = slow->next;
		fast = head->next->next;
	}
	
	return slow;
}

Node* mergeList(Node* list1, Node* list2){
	Node* newHead = new Node(0);
	Node* temp = newHead;
	
	while(list1 != NULL && list2 != NULL){
		if(list1->data < list2->data){
			temp->next = list1;
			temp = list1;
			list1 = list1->next;
		}
		else{
			temp->next = list2;
			temp = list2;
			list2 = list2->next;
		}
	}
	
	while(list1 != NULL){
		temp->next = list1;
		temp = list1;
		list1 = list1->next;
	}
	while(list2 != NULL){
		temp->next = list2;
		temp = list2;
		list2 = list2->next;
	}
	
	Node* ans = newHead->next;
	delete newHead;
	return ans;
	
}

Node* sortLL (Node* head){
	
	if(head == NULL || head->next == NULL) return head;
	Node* middle = findMiddle(head);
	Node* secHead = middle->next;
	middle->next = NULL;

	Node* leftHead = sortLL(head);
	Node* rightHead = sortLL(secHead);
	
	return mergeList(leftHead, rightHead);
	
}



int main (){
	int n;
	cin >> n;

	vector <int> arr(n,0);

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}

	Node* head = convertToLL(arr);
	print(sortLL(head));
	
}