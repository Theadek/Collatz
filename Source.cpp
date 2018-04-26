#include <iostream>
#include "Heap.h"

using namespace std;

int main()
{
	int n, q, k;
	char c;
	Heap *min_heap = new Heap;
	Heap *max_heap = new Heap;
	cin >> n;
	long long int *tab = new long long int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> tab[i];
		min_heap->push(tab[i]);
	}

	cin >> q;
	for (int i = 0; i < q; i++)
	{

	}





}