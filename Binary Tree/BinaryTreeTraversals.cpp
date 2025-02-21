#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node *left, *right;
	Node(int val)
	{
		data = val;
		left = right = NULL;
	}
};

void printPostorder(Node* node)
{
	if (node == NULL)
		return;

	printPostorder(node->left);
	printPostorder(node->right);
	cout << node->data << " ";
}

void printInorder(Node* node)
{
	if (node == NULL)
		return;

	printInorder(node->left);
	cout << node->data << " ";
	printInorder(node->right);
}

void printPreorder(Node* node)
{
	if (node == NULL)
		return;

	cout << node->data << " ";
	printPreorder(node->left);
	printPreorder(node->right);
}

int main()
{
	struct Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
  root->right->left = new Node(6);
	root->right->right = new Node(7);

	cout << "\nPreorder traversal of binary tree is: \n";
	printPreorder(root);

	cout << "\nInorder traversal of binary tree is: \n";
	printInorder(root);

	cout << "\nPostorder traversal of binary tree is: \n";
	printPostorder(root);

	return 0;
}
