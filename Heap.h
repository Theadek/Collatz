#pragma once
#include <stdint.h>

class Heap
{
private:
	struct node {
		uint32_t *value;
		node *left, *right, *parent;
		node(uint32_t* value, node* parent)
		{
			this->value = value;
			this->parent = parent;
			right = left = nullptr;
		}
	};
	node* root;

public:
	Heap();
	void push(uint32_t* X);
	void Collatz_s();
	void Collatz_l();
	~Heap();
};
