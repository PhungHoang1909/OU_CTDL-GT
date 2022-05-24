#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void nhap(int** a, int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			*(*(a + i) + j) = rand() % 10;
}

void xuat(int** a, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(4) << *(*(a + i) + j);
		}
		cout << endl;
	}
}

void tongMT(int** a, int** b, int** c, int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			c[i][j] = a[i][j] + b[i][j];
}

void tichMT(int** a, int** b, int** c, int m, int n, int p)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < p; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < n; k++)
				c[i][j] = a[i][k] + b[k][j];
		}
}

int main()
{
	int** a, **b, m, n, p, q;
	int** tong;
	int** tich;
	cout << "Nhap so dong va so cot cua A: ";
	cin >> m >> n;
	a = new int*[m];
	for (int i = 0; i < m; i++)
		a[i] = new int[n];
	cout << "Xuat ma tran A:\n";
	nhap(a, m, n);
	xuat(a, m, n);
	cout << "Nhap so dong va so cot cua B: ";
	cin >> p >> q;
	b = new int*[p];
	for (int i = 0; i < p; i++)
		b[i] = new int[q];
	cout << "Xuat ma tran B:\n";
	nhap(b, p, q);
	xuat(b, p, q);
	if (m == p && n == q)
	{
		tong = new int*[m];
		for (int i = 0; i < m; i++)
			tong[i] = new int[n];
		cout << "Xuat ma tran tong:\n";
		tongMT(a, b, tong, m, n);
		xuat(tong, m, n);
		for (int i = 0; i < m; i++)
			delete[] tong[i];
		delete[] tong;
		tong = nullptr;
	}
	else
		cout << "Khong tinh duoc ma tran tong " << endl;
	if (n == p)
	{
		tich = new int*[m];
		for (int i = 0; i < m; i++)
			tich[i] = new int[q];
		cout << "Xuat ma tran tich:\n";
		tichMT(a, b, tich, m, n, q);
		xuat(tich, m, q);
		for (int i = 0; i < m; i++)
			delete[] tich[i];
		delete[] tich;
		tich = nullptr;
	}
	else
		cout << "Khong tinh duoc ma tran tich " << endl;
	for (int i = 0; i < m; i++)
		delete[] a[i];
	delete[] a;
	a = NULL;
	for (int i = 0; i < p; i++)
		delete[] b[i];
	delete[] b;
	b = nullptr;
	system("pause");
	return 0;
}