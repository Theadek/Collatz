#pragma once

class Heap
{
private:
	struct node
	{
		long long value;
		int number;
		node(long long X, int n)
		{
			value = X;
			number = n;
		}
	};
	node *root, *minimum, *maximum;
	static int numberCounter;
public:
	Heap();
	void push(long long X);
	void Collatz(char m);

	~Heap();
};
