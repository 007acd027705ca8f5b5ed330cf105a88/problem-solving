#include <iostream>

using namespace std;

class Node {
	public:
		int data;
		Node* next;
		Node(int x) {
			data = x;
		}
};

void printListNode(Node* head) {
	while (head != NULL) {
		cout << head->data << (char)32;
		head = head->next;
	}
}

string insertNode(Node* head, Node* insec, int pos) {
	int t = 1;
	while (head != NULL) {
		if (t == pos) {
			insec->next = head->next;
			head->next = insec;
			break;
		} else {
			head = head->next;
			++t;
		}
	}
	string error_code = "Out of list length";
	return error_code;
}

void appendNode(Node* head, int data) {
	Node* temp = new Node(data);
	while (head->next != NULL) {
		head = head->next;
	}
	head->next = temp;
	temp->next = NULL;
}

void delFirstNode(Node* &head) {
	Node* temp = head;
	head = head->next;
	free(temp);
}

void delLastNode(Node* head) {
	while ((head->next)->next != NULL) {
		head = head->next;
	}
	Node* temp = head->next;
	free(temp);
	head->next = NULL;
}

string deleteMiddleNode(Node* head, int pos) {
	int t = 1;
	while (head != NULL) {
		if (t+1 == pos) {
			Node* temp = head->next;
			head->next = temp->next;
			free(temp);
			break;
		} else {
			head = head->next;
			++t;
		}
	}
	string error_code = "Out of list length";
	return error_code;
}

int main () {


	Node* head = new Node(1);
	head->next = NULL;
	appendNode(head, 3);
	appendNode(head, 5);
	appendNode(head, 7);
	Node* myInsertMode = new Node(2020);
	insertNode(head, myInsertMode, 3);
//	deleteMiddleNode(head, 2);
//	delLastNode(head);
	printListNode(head);
	return 0;
}
