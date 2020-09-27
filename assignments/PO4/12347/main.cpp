#include<bits/stdc++.h>

using namespace std;
// BST node
struct Node {
	int val;
	struct Node *left, *right;
};

//function to create a new node
Node* newNode(int value)
{
	Node* temp = new Node;

	temp->val = value;

	temp->left = nullptr;
	temp->right = nullptr;

	return temp;
}

// A function to insert a newNode with given key in BST
Node* insert(Node* root, int num)
{
	// Create a new Node containing the new element
	Node* newnode = newNode(num);

	Node* head = root;
	// Pointer trail maintains the trailing pointer of head
	Node* trail = nullptr;

	while (head != nullptr) {
		trail = head;
		if (num < head->val)
			head = head->left;
		else
			head = head->right;
	}

	// If the root is nullptr, the new node is the root node
	if (trail == nullptr)
		trail = newnode;

	// If the new key is less then the leaf node key
	// Assign the new node to be its left child
	else if (num < trail->val)
		trail->left = newnode;

	// else assign the new node its right child
	else
		trail->right = newnode;

	// Returns the pointer where the new node is inserted
	return trail;
}

// A function to do postorder traversal of BST
void PostOrder(Node* root)
{
	if (root == nullptr)
		return;
	else {
		PostOrder(root->left);
		PostOrder(root->right);
		cout << root->val << endl;
	}
}
int main()
{
  int num;
	vector<int>preOrder;
  while (cin>>num)
  {
    preOrder.push_back(num);
  }

	Node* root = nullptr;
	root = insert(root, preOrder[0]);
	for (int i = 1; i < preOrder.size(); i++)
	{
		insert(root, preOrder[i]);
	}
	// Print PostOrder traversal of the BST
	PostOrder(root);
  cout<<endl;
}
