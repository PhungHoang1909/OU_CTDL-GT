#include <iostream>
#include <cmath>

using namespace std;

#define MAX 100

typedef struct CELL *LIST;
struct CELL {
	float x;
	LIST next;
};

typedef LIST TABLE[MAX];
typedef float VECTOR[MAX];
TABLE B;
VECTOR A;
int n;

void init(TABLE &B, int &n)
{
	for (int i = 0; i < n; i++)
	{
		B[i] = NULL;
	}
}

void LIST_INSERT(LIST &L, float a)
{
	LIST p;
	p = new(CELL);
	p->x = a;
	p->next = L;
	L = p;
}

void LIST_sort(LIST &L)
{
	LIST p, q;
	float t;
	p = L;
	while (p != NULL)
	{
		q = p;
		while (q != NULL)
		{
			if ((q->x) < (p->x))
			{
				t = p->x;
				p->x = q->x;
				q->x = t;
			}
			q = q->next;
		}
		p = p->next;
	}
}

void TABLE_INSERT(TABLE B, VECTOR A, int &n)
{
	for (int i = 1; i <= n; i++)
		LIST_INSERT(B[int(n*A[i])], A[i]);
}

void trave(LIST L)
{
	if (L != NULL)
	{
		cout << (L->x) << ' ';
		trave(L->next);
	}
}

void TRAVEL(TABLE B, int m)
{
	for (int i = 0; i < m; i++)
		if (B[i] != NULL)
		{
			trave(B[i]);
			cout << "\n";
		}
}

void TABLE_SORT(TABLE &B, int m)
{
	for (int i = 0; i < m; i++)
		if (B[i] != NULL)
			LIST_sort(B[i]);
}

void TABLE_CONCAT(TABLE &B, VECTOR &A, int m)
{
	LIST p;
	int j = 1;
	for (int i = 0; i < m; i++)
	{
		if (B[i] != NULL)
		{
			p = B[i];
			while (p != NULL)
			{
				A[j] = p->x;
				p = p->next;
				j++;
			}
		}
	}
}

void print(VECTOR A, int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << A[i] << " ";
	}
	cout << "\n";
}

int main()
{
	n = 10;
	init(B, n);
	for (int i = 1; i <= n; i++)
	{
		cout << "A[" << i << "] = ";
		cin >> A[i];
	}
	TABLE_INSERT(B, A, n);
	TRAVEL(B, n);
	cout << endl;
	TABLE_SORT(B, n);
	TABLE_CONCAT(B, A, n);
	print(A, n);

	system("pause");
	return 0;
}