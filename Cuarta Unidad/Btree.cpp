#include <iostream>
#include <cstdint>

// Autor: Erick Leonardo Cruz Gil

using namespace std;

struct node{
	int key_value;
	node *left;
	node *right;
};

class btree{
	public:
		btree();
		~btree();
		void insert(int key);
		node *search(int key);
		void destroy_tree();
		node *get_root();
		void drawTree(int contador);
	private:
		void destroy_tree(node *leaf);
		void insert(int key, node *leaf);
		node *search(int key, node *leaf);
		void drawTree(node *root, int contador);
		node *root;
};

btree::btree(){
	root = NULL;
}

btree::~btree(){
	destroy_tree();
}

void btree::destroy_tree(node *leaf){
	if(leaf!=NULL){
		destroy_tree(leaf->left);
		destroy_tree(leaf->right);
		delete leaf;
	}
}

void btree::insert(int key, node *leaf){
	if(key < leaf->key_value){
		if(leaf->left!=NULL){
			insert(key, leaf->left);
		} else {
			leaf->left=new node;
			leaf->left->key_value=key;
			leaf->left->left=NULL;		// Define que el nodo hijo a la izq del nuevo sea nulo
			leaf->left->right=NULL;		// Define que el nodo hijo a la der del nuevo sea nulo
		}
	} else if (key >= leaf->key_value) {
		if(leaf->right!=NULL){
			insert(key, leaf->right);
		} else {
			leaf->right=new node;
			leaf->right->key_value=key;
			leaf->right->left=NULL;		// Define que el nodo hijo a la izq del nuevo sea nulo
			leaf->right->right=NULL;	// Define que el nodo hijo a la der del nuevo sea nulo
		}
	}
}

node *btree::search(int key, node *leaf){
	if(leaf!=NULL){
		if(key==leaf->key_value){
			return leaf;
		} else if(key < leaf->key_value){
			return search(key, leaf->left);			
		} else {
			return search(key, leaf->right);
		}
	} else {
		return NULL;
	}
}

void btree::drawTree(node *root, int contador){
	if (root == NULL){
		return;
	}else{
		drawTree(root->right,contador+2);
		for(int i=0; i< contador ; i++){
			cout << "   ";
		}
		cout << "|--" << "|"<<root->key_value<<"|" << endl;
		drawTree(root->left,contador+2);
	}
}


void btree::insert(int key){
	if(root!=NULL){
		insert(key, root);
	} else {
		root = new node;
		root->key_value = key;
		root->left = NULL;
		root->right = NULL;
	}
}

node *btree::search(int key){
	return search(key, root);
}

void btree::destroy_tree(){
	destroy_tree(root);
}

node *btree::get_root(){
	return root;
}

void btree::drawTree(int contador){
	return drawTree(root, contador);
}


int main(){
	int contador = 0;
	btree arbol;
	arbol.insert(41);
	arbol.insert(65);
	arbol.insert(20);
	arbol.insert(72);
	arbol.insert(91);
	arbol.insert(50);
	arbol.insert(29);
	arbol.insert(32);
	arbol.insert(11);
	arbol.drawTree(contador);
	
	
	
	
	return 0;
}


















