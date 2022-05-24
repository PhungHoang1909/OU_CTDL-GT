/*Bài 10. Viết chương trình nhập vào chuỗi ngày tháng năm theo định dạng: “thang-ngay-nam”.
Sau đó trả về định dạng tương tự nhưng theo qui cách khung giờ quốc tế.
Ví dụ:
Nhập “07/21/55”
Thì kết quả: July 21, 1955   */

#include <iostream>
#include <cstring>

using namespace std;

void InMonth(int n)
{
	switch (n)
	{
	case 1:
		cout << "January";
		break;
	case 2:
		cout << "February";
		break;
	case 3:
		cout << "March";
		break;
	case 4:
		cout << "April";
		break;
	case 5:
		cout << "May";
		break;
	case 6:
		cout << "June";
		break;
	case 7:
		cout << "July";
		break;
	case 8:
		cout << "August";
		break;
	case 9:
		cout << "September";
		break;
	case 10:
		cout << "October";
		break;
	case 11:
		cout << "November";
		break;
	case 12:
		cout << "December";
		break;
	}
}

int main()
{
	char s[9], s1[3], s2[3], s3[3];
	int d, m, y;
	do {
		cout << "Nhap mm/dd/yy: ";
		cin.get(s, 9);
		strncpy_s(s1, s, 2);
		s1[2] = '\0';
		m = atoi(s1);
		
		strncpy_s(s2, s + 3, 2);
		s2[2] = '\0';
		d = atoi(s2);
		
		strncpy_s(s3, s + 6, 2);
		s3[2] = '\0';
		y = atoi(s3);
	
		if (m <= 0 || m >= 13)
			cout << "Nhap sai! \n";
	} while (m <= 0 || m >= 13);
	if (y >= 30)
		y = y + 1900;
	else
		y += 2000;
	cout << "Nhap '" << s << "' \n";
	cout << "Xuat chuoi: "; 
	InMonth(m);
	cout << " " << d << ", " << y << endl;
	return 0;
}