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
	prev->next = head;
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

int LenOfLoop(Node* head){
	
	Node* slow = head;
	Node* fast = head;
	while(fast != NULL && fast->next != nullptr){
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast){
			slow = slow->next;
			int cnt = 1;
			while(slow != fast){
				slow = slow->next;
				cnt++;
			}
			return cnt;
		}
	}
	
	return 0;
}


int main (){
	int n;
	cin >> n;

	vector <int> arr(n,0);

	for(int i = 0; i < n; i++){
		cin >> arr[i];
	}
	

	Node* head = convertToLL(arr);
	// print(head);
	int ans = LenOfLoop(head);

	cout << ans;

}