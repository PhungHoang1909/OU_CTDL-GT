/*
Viết chương trình dùng cấp phát động của con trỏ để viết hàm nhập, xuất 1 mảng số
nguyên r hàng và c cột. Sau đó viết hàm dùng con trỏ để tính tổng các phần tử nào là số
nguyên tố.
*/

#include <iostream>
#include <cmath>
#include <cstdlib>

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
			cout << *(*(a + i) + j) << " ";
		}
		cout << endl;
	}
}

bool KTNT(int n)
{
	if (n < 2)
		return false;
	else
		for (int i = 2; i <= sqrt(n); i++)
			if (n % i == 0)
				return false;
	return true;
}

int Tong_NT(int** a, int m, int n)
{
	int tong = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if(KTNT(a[i][j]))
				tong += a[i][j];
	return tong;
}

int main()
{
	int** a, m, n;
	cout << "Nhap so dong va so cot: ";
	cin >> m >> n;
	a = new int*[m];
	for (int i = 0; i < m; i++)
		a[i] = new int[n];
	cout << "Xuat mang:\n";
	nhap(a, m, n);
	xuat(a, m, n);
	cout << "Tong cac so nguyen to trong mang: " << Tong_NT(a, m, n) << endl;
	for (int i = 0; i < m; i++)
		delete[] a[i];
	delete[] a;
	a = nullptr;
	system("pause");
	return 0;
}