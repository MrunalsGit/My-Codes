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

Node* findKth(Node* head, int k){
	Node* temp = head;
	int cnt = 1;
	while(temp != NULL){
		if(cnt == k) return temp;
		cnt++;
		temp = temp->next;
	}
	return temp;
}

void reverse(Node* head){
	Node* temp = head;
	Node* prev = NULL;  
	while(temp != NULL){
		Node* front = temp->next;
		temp->next = prev;
		prev = temp;
		temp = front; 
	}
}

// Node* findTail (Node* head){                                 //If asked to reverse nums 
	// Node* temp = head;                                       //even if they are less than K
	// while(temp != NULL && temp->next != NULL){
		// temp = temp->next;
	// }
	// return temp;
// }

Node* reverseKGroup(Node* head, int k){
	Node* temp = head;
	Node* prevNode = NULL;
	Node* nextNode = NULL;
	while(temp!= NULL){

		Node* KthNode = findKth (temp, k);
		if(KthNode == NULL){
			// Node* last = findTail(temp);
			// reverse(temp);
			// if(prevNode) prevNode->next = last;
			if(prevNode) prevNode->next = temp;
			// else head = last;
			break;
		}

		nextNode = KthNode->next;
		KthNode->next = NULL;
		reverse(temp);

		if(temp == head) head = KthNode;
		else {
			prevNode->next = KthNode;
		}

		temp->next = nextNode;
		prevNode = temp;
		temp = nextNode;
	}
	return head;
}


int main (){
	int n, k;
	cin >> n >> k;

	vector <int> arr(n,0);

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	// for(auto i : arr) cout << i << " ";

	Node* head = convertToLL(arr);


	print(reverseKGroup(head, k));

	
}