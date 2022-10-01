// title: diameter of a bin tree
// link: https://www.geeksforgeeks.org/diameter-of-a-binary-tree

#include <iostream>

using namespace std;

class Node {
public:
	int data;
	Node* left;
	Node* right;
	Node(int value) {
		data = value;
		left = NULL;
		right = NULL;
	}
};

int max(int a, int b) {return (a > b)? a: b;}

int height(Node* node) {
	if (node == NULL) {
		return 0;
	}
	return 1 + max(height(node->left), height(node->right));
}

int diameter(Node* tree) {
	if (tree == NULL) {
		return 0;
	}
	
	return 1 + max(height(tree->left) + height(tree->right) + 1, 
		max(diameter(tree->left), diameter(tree->right)));
}

int main () {
	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(7);
	root->right->left = new Node(8);
	root->right->right = new Node(5);
	root->right->right->left = new Node(6);
	
	cout << diameter(root) << endl;
	cout << height(root) << endl;
	return 0;
}
