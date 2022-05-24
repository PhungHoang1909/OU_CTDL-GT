/*
Bài 5. Viết chương trình cho phép người dùng nhập password (10 ký tự) và hiển thị dưới dạng k
ý tự “X”. Sau đó kiểm tra xem đúng password là “SinhVienCQ”hay không? Nếu đúng thông
báo đã đăng nhập thành công, nếu sai yêu cầu nhập lại. Tối đa cho phép nhập 3 lần.
Lưu ý: dùng mảng ký tự lưu trữ chuỗi vừa nhập.
Ví dụ:
Nhap mat khau: X X X X X X X X X X
Nhap sai! Nhap lai!
Nhap mat khau: X X X X X X X X X X
Dang nhap thanh cong!
*/

#include <iostream>
//#include <string>
#include <conio.h>
using namespace std;
int main()
{
	char pass[11]; //string pass ="";
	char ch;
	int lan = 1;
	do
	{
		cout << "Nhap vao Password " << lan << ": ";
		ch = getch();
		int i = 0;
		while (ch != 13) //character 13 is enter
		{
			pass[i] = ch; //pass.push_back(ch) dung string;
			cout << 'X';
			ch = getch();
			i++;
		}
		pass[10] = '\0';
		lan++;
		if (!strcmp(pass, "SinhVienCQ"))
			cout << "\nDang nhap thanh cong!\n";
		else
			cout << "\nNhap sai! Nhap lai!\n";
	} while (lan <= 3 && strcmp(pass, "SinhVienCQ"));
	system("pause");
	return 0;
}