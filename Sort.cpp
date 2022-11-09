#include <iostream>
#include <cstdlib>

using namespace std;

#define MAX 100

void input(int a[], int &n)
{
	for (int i = 0; i < n; i++)
		a[i] = rand() % 10 + 1;
}

void output(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << "a[" << i << "] = " << a[i] << " ";
	cout << endl;
}

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int patrition(int a[], int p, int r)
{
	int i, j, x;
	x = a[r];
	i = p - 1;
	for (j = p; j < r; j++)
	{
		if (a[j] <= x)
		{
			i++;
			swap(a[i], a[j]);
		}
	}
	swap(a[i + 1], a[r]);
	return i + 1;
}

void quickSort(int a[], int p, int r)
{
	int q;
	if (p < r)
	{
		q = patrition(a, p, r);
		quickSort(a, p, q - 1);
		quickSort(a, q + 1, r);
	}
}

void heapify(int a[], int n, int i)
{
	int largest = i;
	int left = 2 * i + 1;
	int right = 2 * i + 2;

	if (left < n && a[left] > a[largest])
		largest = left;

	if (right < n && a[right] > a[largest])
		largest = right;

	if (largest != i) {
		swap(a[i], a[largest]);
		heapify(a, n, largest);
	}
}

void heapSort(int a[], int n)
{
	// Build max heap
	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(a, n, i);

	// Heap sort
	for (int i = n - 1; i >= 0; i--) {
		swap(a[0], a[i]);
		heapify(a, i, 0);
	}
}

int main()
{
	int a[MAX], n;

	do
	{
		cout << "Number of elements: ";
		cin >> n;
		if (n < 0 || n > MAX)
			cout << "Try again!\n";
	} while (n < 0 || n > MAX);

	input(a, n);
	cout << "Array:\n";
	output(a, n);
	cout << endl;

	cout << "Array after HeapSort:\n";
	heapSort(a, n);
	output(a, n);
	cout << endl;

	cout << "Array after QuickSort:\n";
	quickSort(a, 0, n - 1);
	output(a, n);
	cout << endl;

	system("pause");
	return 0;
}