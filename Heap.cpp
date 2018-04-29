#include "Heap.h"

Heap::Heap()
{
	root = nullptr;
}

void Heap::push(uint32_t* X)
{

	if (root == nullptr) {
		root = new node(X, nullptr);
	}
	else {
		node* current = root;
		bool isLeft;
		if (*root->value == *X) { //taka sama wartosc co root
			root = new node(X, nullptr);
			current->parent = root;
			root->right = current->right;
			root->right->parent = root;
			current->right = nullptr;
			root->left = current;
		}
		else {
			if (*root->value > *X) {
				isLeft = false;
			}
			else {
				isLeft = true;
			}
			while (true) {
				if (*current->value < *X) {
					if (current->left == nullptr) {
						current->left = new node(X, current);
						break;
					}
					else {
						current = current->left;
					}
				}
				else if (*current->value > *X) {
					if (current->right == nullptr) {
						current->right = new node(X, current);
						break;
					}
					else {
						current = current->right;
					}
				}
				else { //takie same, sprawdzamy po adresach
					if (current->value < X) //wystepuje pozniej w tablicy
					{
						if (isLeft == true){
							current->parent->left = new node(X, current->parent);
							current->parent = current->parent->left;
							current->parent->left = current;
						}
						else {
							current->parent->right = new node(X, current->parent);
							current->parent = current->parent->right;
							current->parent->right = current;
						}
					}
					else if (isLeft == true) {
						if (current->left == nullptr) {
							current->left = new node(X, current);
							break;
						}
						else current = current->left;
					}
					else {
						if (current->right == nullptr) {
							current->right = new node(X, current);
							break;
						}
						else current = current->right;
					}
				}
			}
		}
	}
}



void Heap::Collatz_s()
{

}

Heap::~Heap()
{
}
