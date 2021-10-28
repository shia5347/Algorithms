#include<iostream>

using namespace std;

struct Node {
	int data;
	struct Node *left, *right; //Reference to same node for all left and rights every iteration
	Node(int data) {
		this->data = data;
		left=right=NULL;
	}
};

void printInOrder(struct Node* node) {
	if(node == NULL) {
		return;
	}

	printInOrder(node->left);

	printInOrder(node->right);

	cout << node->data << ", ";
}

int main() {
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);

	printInOrder(root);
}
