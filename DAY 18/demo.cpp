#include <iostream>
#include <stack>
using namespace std;


class bstree;
//[4m]
class node {
private:
	int data;
	node* left;
	node* right;
	bool visited;
public:
	node() {
		data = 0;
		left = NULL;
		right = NULL;
		visited = false;
	}
	node(int val) {
		data = val;
		left = NULL;
		right = NULL;
		visited = false;
	}
	int get_data() {
		return data;
	}
	friend class bstree;
};

class bstree {
private:
	node* root;
public:
	bstree() {
		root = NULL;
	}
	void add(int val) {
		// if tree is empty, root is new node
		if (root == NULL)
			root = new node(val);
		// else add node in tree (root)
		else
			add(root, val);
	}
    //4[m]
	void add(node* trav, int val) {
		// if val < trav->data, 
		if (val < trav->data) {
			// if no left sub tree present, add new node to left
			if (trav->left == NULL) {
				trav->left = new node(val);
				return;
			}
			// add to left subtree
			add(trav->left, val);
		}
		// if val >= trav->data
		else {
			// if no left sub tree present, add new node to right
			if (trav->right == NULL) {
				trav->right = new node(val);
				return;
			}
			// add to right subtree
			add(trav->right, val);
		}
	}
    //implimentation of abstraction
	void preorder(node* trav) {
		if (trav == NULL)
			return;
		cout << trav->data << ", ";
		preorder(trav->left);
		preorder(trav->right);
	}
	void preorder() {
		cout << "PRE: ";
		preorder(root);
		cout << endl;
	}
   // [10M]
	void inorder(node* trav) {
		if (trav == NULL)
			return;
		inorder(trav->left);
		cout << trav->data << ", ";
		inorder(trav->right);
	}
	void inorder() {
		cout << "IN : ";
		inorder(root);
		cout << endl;
	}

	void postorder(node* trav) {
		if (trav == NULL)
			return;
		postorder(trav->left);
		postorder(trav->right);
		cout << trav->data << ", ";
	}
	void postorder() {
		cout << "POST: ";
		postorder(root);
		cout << endl;
	}

	void delall(node* trav) {
		if (trav == NULL)
			return;
		delall(trav->left);
		delall(trav->right);
		delete trav;
	}
	void delall() {
		delall(root);
		root = NULL;
	}
	~bstree() {
		delall();
	}

};


int main() {

    //50,30,90,10,40,70,100,20,80,60
	bstree t;
	t.add(50);
	t.add(30);
	t.add(90);
	t.add(10);
	t.add(40);
	t.add(70);
	t.add(100);
	t.add(20);
	t.add(80);
	t.add(60);
	
	t.preorder();//abstraction
	t.inorder();
	t.postorder();
	return 0;

    int num1=10;
    delete &num1;

    bstree bst;

}
