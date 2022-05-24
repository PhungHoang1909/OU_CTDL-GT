#include <iostream>
#include <cmath>

using namespace std;

void menu()
{
	cout << "1. In so nguyen tu khong vuot qua n." << endl;
	cout << "2. Tinh tich ng to khong vuot qua n." << endl;
	cout << "3. In ra he so 2 tu 1 den n. " << endl;
	cout << "4. Thoat." << endl;
}

bool KTNT(int n)
{
	if (n < 2)
	{
		return false;
	} else {
		for (int i = 2; i <=sqrt((float)n); i++)
		{
			if (n % i == 0 ) {
				return false;
			}
		}
		return true;
	}
}


int Tich_NT(int n)
{
	int tich = 1;
	for (int i = 2; i <= n; i++)
		if (KTNT(i) == true)
			tich *= i;
	return tich;
}

int He10_2(int n)
{
	int bin = 0, i = 0, r;
	while(n > 0)
	{
		r = n % 2;
		bin = bin + r * (pow(10.0,i));
		n /= 2;
		i++;
	}
	return bin;
}

int main()
{
	int n;
	int chon;
	do
	{
		menu();

		do
		{
			cout << "Nhap vao so nguyen n: ";
			cin >> n;
			if (n <= 0)
				cout << "Nhap sai, vui long nhap lai. " << endl;
		}while(n <= 0);
		do
		{
			cout << "Chon chuc nang: ";
			cin >> chon;
			if (chon < 1 || chon > 4)
				cout << "Chuc nang khong hop le. " << endl;
		}while(chon < 1 || chon > 4);

		if (chon >= 1 && chon <= 3)
		{
			switch(chon)
			{
			case 1:
				cout << "Cac so nguyen to khong vuot qua n: " << endl;
				for (int i = 2; i <= n; i++)
					if (KTNT(i) == true)
						cout << i << " ";
				cout << endl;
				break;
			case 2:
				cout << "Tich nguyen to khong vuot qua n: " << Tich_NT(n);
				cout << endl;
				break;
			case 3:
				cout << "He so 2 tu 1 den n: " << endl;
				for (int i = 1; i <= n; i++)
					cout << He10_2(i) << " ";
				cout << endl;
				break;
			system("pause");
			}
		} else 
			break;
	}while(true);
	system("pause");
	return 0;
}