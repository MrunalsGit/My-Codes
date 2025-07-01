#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
	Node* child;

	Node(int data1){
		data = data1;
		next = nullptr;
		child = nullptr;
	}

	Node(int data1, Node* next1, Node* child1){
		data = data1;
		next = next1;
		child = child1;
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

Node* convertToChildLL(vector <int> arr2){

	if(arr2.size() == 0)return NULL;
	
	Node* head = new Node (arr2[0]);
	Node* prev = head;
	for(int i = 1; i < arr2.size(); i++){
		Node* curr = new Node (arr2[i]);
		prev->child = curr;
		prev = curr;
	}
	return head;
}

Node* convertToMultiLevelLL(Node* head, Node* head2, int k){

	Node* temp = head;
	k--;

	while( temp!= NULL){

		if(k == 0) {
			temp->child = head2;
			return temp;
		}

		k--;
		temp = temp->next;
	}
	return NULL;	
}

void print (Node* head){
	Node*temp = head;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
}

void printChild (Node* head){
	Node*temp = head;
	while(temp != NULL){
		cout << temp->data << "\n";
		temp = temp->child;
	}
	cout << "\n";
}

Node* mergeLL(Node* t1, Node* t2){
	Node* dummyNode = new Node (-1);
	Node* temp = dummyNode;
	
	while(t1 != NULL && t2 != NULL){
		
		if(t1->data <= t2->data){
			temp->child = t1;
			temp = t1;
			t1 = t1->child;
		}
		else{
			temp->child = t2;
			temp = t2;
			t2 = t2->child;
		}
	}
	if(t2) temp->child = t2;
	else temp->child = t1;
	Node* head = dummyNode->child;
	delete dummyNode;
	return head;
}

Node* flattenLL(Node* head){
	if(head == NULL || head->next == NULL) return head;
	Node* mergedHead = flattenLL(head->next);
	return mergeLL(head,mergedHead);
}

int main (){
	
	int n; cin >> n;
	vector <int> arr(n,0);
	for(int i = 0; i < n; i++)cin >> arr[i];
	
	Node* head = convertToLL(arr);
	
	int t; cin >>t;
	while(t--){
		int m, loc; cin >> m >> loc;
		
		vector <int> arr2(m,0);
		for(int i =0 ;i < m; i++) cin >> arr2[i];
		
		Node* head2 = convertToChildLL(arr2);
		
		Node* check = convertToMultiLevelLL(head,head2,loc);
		// printChild(check);
	}
	
	printChild(flattenLL(head));
	
}