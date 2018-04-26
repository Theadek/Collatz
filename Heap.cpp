#include "Heap.h"

Heap::Heap()
{
	root = nullptr;
	minimum = nullptr;
	maximum = nullptr;
}

void Heap::push(long long X)
{
	
	if (root == nullptr)
	{
		minimum = maximum = root = new node(X);
	}
	else
	{
		node* tmp = root;
		while (true)
		{
			if (X < tmp->value)
			{
				if (tmp->left == nullptr)
				{
					tmp->left = new node(X);
					break;
				}
				else
				{
					tmp = tmp->left;
				}
			}
			else
		}
	}
}

void Heap::Collatz(char m)
{
	if (m == 's')
	{
		if (minimum->value % 2 == 0) //parzyste
		{
			minimum->value /= 2;
		}
		else
		{
			minimum->value *= 3;
			minimum->value++;
		}
	}
	else if (m == 'l')
	{

	}
}

Heap::~Heap()
{
}
