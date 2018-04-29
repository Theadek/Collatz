#include <iostream>
#include <limits.h> //UINT32_MAX
#include <stdint.h> //uint32_t
#include "Heap.h"

using namespace std;

int main()
{ 
	int n, q, k;
	char c;
	cin >> n;
	uint32_t *tab = new uint32_t[n];
	Heap* heap = new Heap;
	for (int i = 0; i < n; i++)
	{
		cin >> tab[i];
		if(tab[i]!=1)
			heap->push(&tab[i]);
	}
	/*cin >> q;
	for (int i = 0; i < q; i++)
	{
		cin >> k >> c;
		for (int j = 0; j < k; j++)
		{
			if (c == 's')heap->Collatz_s();
			else if (c == 'l')heap->Collatz_l;
		}
	}*/
	for (int i = 0; i < n; i++)
	{
		if (tab[i] == 0)cout << "m";
		else cout << tab[i];
		cout << " ";
	}

	return 0;
}