#pragma once

class Heap
{
private:
	struct node
	{
		long long value;
		node *left, *right;
		bool isToBig;
		node(long long X)
		{
			value = X;
			left = nullptr;
			right = nullptr;
			isToBig = false;
		}
	};
	node *root, *minimum, *maximum;

public:
	Heap();
	void push(long long X);
	void Collatz(char m);

	~Heap();
};
