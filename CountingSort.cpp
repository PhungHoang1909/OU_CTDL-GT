#include <iostream>
#include <cstdlib>

using namespace std;

const int MAXSIZE = 100;

int B[MAXSIZE], c[MAXSIZE];

void input(int a[], int &n, int &max)
{
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	max = INT16_MIN;
	for (int i = 1; i <= n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> a[i];
		if (max < a[i])
		{
			max = a[i];
		}
	}
}

void output(int a[], int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void countingSort3(int A[], int B[], int k, int n) {
	int i, j;

	for (i = 0; i <= k; i++) {
		c[i] = 0;
	}
	for (j = 1; j <= n; j++) {
		c[A[j]]++;
	}
	for (i = 1; i <= k; i++) {
		c[i] = c[i] + c[i - 1];
	}
	for (j = n; j >= 1; j--) {
		B[c[A[j]]] = A[j];
		c[A[j]]--;
	}
	
	for(i = 1; i <= n; i++)
		A[i] = B[n - i + 1];
}

int main()
{
	int a[MAXSIZE], n, k = 0;
	input(a, n, k);
	output(a, n);

	countingSort3(a, B, k, n);
	output(a, n);

	system("pause");
	return 0;
}