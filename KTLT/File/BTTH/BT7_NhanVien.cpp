/*
Bài 7. Viết chương trình lưu hệ số lương của nhân viên trong 1 công ty dưới dạng số
thực có 2 chữ số phần thập phân, nhập liên tục và mỗi số cách nhau bằng khoảng trắng
hoặc enter, muốn kết thúc việc nhập dữ liệu thì gõ -1.
Ghi thông tin từng hệ số lương của từng người trên 1 dòng trong file BT7.txt.
Kiểm tra kết quả chương trình
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    double LCB = 0.0;
    ofstream oFile;
    oFile.open("BT7.txt", ios::out);
    if(oFile.is_open())
    {
        do
        {
            cout << "Nhap LCB: ";
            cin >> LCB;
            if (LCB != -1)
                oFile << LCB << endl;
        } while (LCB != -1);
        oFile.close();
    }
    system("pause");
    return 0;
}