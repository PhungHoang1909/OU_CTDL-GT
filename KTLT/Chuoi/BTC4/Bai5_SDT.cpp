///*
//Viết chương trình nhập vào số điện thoại, sau đó tách mã vùng, số tổng
//đài, số nội bộ. Biết rằng:
//- Mã vùng: chứa số 0 đầu tiên, có thể dài 2 đến 4 ký tự.
//- Số tổng đài: nếu ở thành phố Hà Nội hay TPHCM thì số tổng đài bao
//gồm 8 ký tự. Nếu ở tỉnh có 7 chữ số.
//- Số nội bộ: 3 ký tự cuối.
//*/
//
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	char s[16], s1[5], s2[9], s3[4];
//	int dai;
//	cout << "Nhap so dien thoai: ";
//	cin.getline(s, 16);
//	dai = strlen(s);
//	if (strncmp(s, "024", 3) == 0 || strncmp(s, "028", 3) == 0)
//	{
//		strncpy_s(s3, s + (dai - 3), 3);
//		s3[3] = '\0';
//		strncpy_s(s2, s + (dai - 11), 8);
//		s2[8] = '\0';
//		strncpy_s(s1, s, 3);
//		s1[dai - 11] = '\0';
//	}
//	else
//	{
//		strncpy_s(s3, s + (dai - 3), 3);
//		s3[3] = '\0';
//		strncpy_s(s2, s + (dai - 10), 7);
//		s2[7] = '\0';
//		strncpy_s(s1, s, 3);
//		s1[dai - 10] = '\0';
//	}
//	cout << "Ma vung: " << s1 << endl;
//	cout << "Tong dai: " << s2 << endl;
//	cout << "So dien thoai: " << s3 << endl;
//	system("pause");
//	return 0;
//}