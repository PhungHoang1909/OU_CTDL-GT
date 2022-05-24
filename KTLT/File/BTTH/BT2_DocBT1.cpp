/*
Bài 2. Viết chương trình đọc giá trị của file BT1.txt vừa ghi được ở Bài 1 và lưu vào biến
m. Xuất lại giá trị m này lên màn hình kết quả khi biên dịch chương trình.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inFile;
    int m;
    inFile.open("BT1.txt", ios::in);
    if(inFile.is_open())
    {
        inFile >> m;
        cout << "Tong = " << m << endl;
        inFile.close();
        cout << "Doc File thanh cong!" << endl;
    }
    else
        cout << "Doc File khong thanh cong!" << endl;
    system("pause");
    return 0;
}