#include <iostream>
#include <iomanip>

using namespace std;

void TGPascal(int** a, int h)
{
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || j == i)
				*(*(a + i) + j) = 1;
			else
				*(*(a + i) + j) = *(*(a + i - 1) + j - 1) + *(*(a + i - 1) + j);
			cout << setw(4) << *(*(a + i) + j);
		}
		cout << endl;
	}
}

int main()
{
	int** a, h;
	cout << "Nhap chieu cao tam giac pascal: ";
	cin >> h;
	a = new int*[h];
	for (int i = 0; i < h; i++)
		a[i] = new int[h];
	cout << "Xuat tam giac Pascal:\n";
	TGPascal(a, h);
	for (int i = 0; i < h; i++)
		delete[] a[i];
	delete[] a;
	a = nullptr;
	system("pause");
	return 0;
}