#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node* next;
	Node* random;

	Node(int data1){
		data = data1;
		next = nullptr;
		random = nullptr;
	}

	Node(int data1, Node* next1, Node* random1){
		data = data1;
		next = next1;
		random = random1;
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

void linkRandoms(Node* head, vector<int> arr){
	
	if(arr.size() == 0) return;
	Node* curr = head;
	
	for(int i = 0; i < arr.size(); i++){
		Node* temp = head;
		int k = arr[i];

		if(arr[i] == -1) {
			curr = curr->next;
			continue;
		}
		else{
			k--;
			while(temp != NULL){
				if(k == 0) break;
				k--;
				temp = temp->next;
			}
			curr->random = temp;
			curr = curr->next;
		}
	}
}

void print (Node* head){
	Node*temp = head;
	while(temp != NULL){
		cout << temp->data << " ";
		temp = temp->next;
	}
}

void insertCopy(Node* head){
	Node* temp = head;
	while(temp != NULL){
		Node* copyNode = new Node (temp->data);
		copyNode->next = temp->next;
		temp->next = copyNode;
		temp = temp->next->next;
	}
}

void insertRandom(Node* head){
	Node* temp = head;
	while(temp != NULL){
		Node* copyNode = temp->next;
		if(temp->random) copyNode->random = temp->random->next;
		temp = temp->next->next;
	}
}

Node* clonedLL(Node* head){
	Node* dummy = new Node (-1);
	Node* curr = dummy;
	Node* temp = head;
	while(temp != NULL){
		curr->next = temp->next;
		temp->next = temp->next->next;
		curr = curr->next;
		temp = temp->next;
	}
	Node* ans = dummy->next;
	delete dummy;
	return ans;
}

Node* cloneLLwithRandoms(Node* head){
	insertCopy(head);
	insertRandom(head);
	return clonedLL(head);
}

int main (){
	
	int n; cin >> n;
	vector <int> arr(n,0), arr2(n,0);
	for(int i = 0; i < n; i++)cin >> arr[i];
	
	Node* head = convertToLL(arr);
	
	for(int i =0; i < n; i++) cin >> arr2[i];
	linkRandoms(head, arr2);
	// cout << head->next->next->next->next->random->data << "\n";
	
	Node* ans = cloneLLwithRandoms(head);
	print(ans);
	// cout << ans->next->next->next->next->random->data << "\n";
	
}