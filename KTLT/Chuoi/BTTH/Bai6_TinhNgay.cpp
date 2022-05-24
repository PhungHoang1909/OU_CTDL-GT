/*
Bài 6. Xây dựng hàm nhận vào 1 chuỗi ký tự có dạng: “ngay-thang-nam” với mỗi giá trị
ngày, tháng là 2 ký tự, năm là 4 ký tự (Ví dụ: “06-01-2007”). Sau đó trả về xem ngày đó là
ngày thứ mấy trong năm.
Viết chương trình kiểm chứng hàm vừa xây dựng
*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char s[11], D[3], M[3], Y[5];
	int d, m, y, t2;
	cout << "Nhap ngay thang nam (dd-mm-yyyy): ";
	cin.getline(s, 11);
	strncpy_s(D, s, 2);
	D[2] = '\0';
	strncpy_s(M, s + 3, 2);
	M[2] = '\0';
	strncpy_s(Y, s + 6, 4);
	Y[4] = '\0';
	d = atoi(D);
	m = atoi(M);
	y = atoi(Y);
	if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
		t2 = 29;
	else
		t2 = 28;
	switch (m)
	{
	case 1:
		cout << "La ngay thu " << d << " trong nam " << y << endl;
		break;
	case 2:
		cout << "La ngay thu " << 31 + d << " trong nam " << y << endl;
		break;
	case 3:
		cout << " La ngay thu " << 31 + t2 + d << " trong nam " << y << endl;
		break;
	case 4:
		cout << " La ngay thu " << 31 + t2 + 31 + d << " trong nam " << y << endl;
		break;
	case 5:
		cout << " La ngay thu " << 31 + t2 + 31 + 30 + d << " trong nam " << y << endl;
		break;
	case 6:
		cout << " La ngay thu " << 31 + t2 + 31 + 30 + 31 + d << " trong nam " << y << endl;
		break;
	case 7:
		cout << " La ngay thu " << 31 + t2 + 31 + 30 + 31 + 30 + d << " trong nam " << y << endl;
		break;
	case 8:
		cout << " La ngay thu " << 31 + t2 + 31 + 30 + 31 + 30 + 31 + d << " trong nam " << y << endl;
		break;
	case 9:
		cout << " La ngay thu " << 31 + t2 + 31 + 30 + 31 + 30 + 31 + 30 + d << " trong nam " << y << endl;
		break;
	case 10:
		cout << " La ngay thu " << 31 + t2 + 31 + 30 + 31 + 30 + 31 + 30 + 31 + d << " trong nam " << y << endl;
		break;
	case 11:
		cout << " La ngay thu " << 31 + t2 + 31 + 30 + 31 + 30 + 31 + 30 + 31 + 30 + d << " trong nam " << y << endl;
		break;
	case 12:
		cout << " La ngay thu " << 31 + t2 + 31 + 30 + 31 + 30 + 31 + 30 + 31 + 30 + 31 + d << " trong nam " << y << endl;
		break;
	default:
		break;
	}
	system("pause");
	return 0;
}