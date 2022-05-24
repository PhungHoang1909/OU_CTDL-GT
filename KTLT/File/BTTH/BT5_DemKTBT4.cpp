/*
Bài 5. Viết chương trình đếm tổng số ký tự đang có trong file BT4.txt và xuất kết quả
đếm đó ra màn hình kết quả.
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char kt = ' ';
    int dem = 0;
    ifstream inFile;
    inFile.open("BT4.txt", ios::in);
    if(inFile.is_open())
    {
        while(!inFile.eof())
        {
            inFile.ignore(1);
            inFile >> kt;
            dem++;
        }
        inFile.close();
    }
    cout << "So ky tu la: " << dem << endl;
    system("pause");
    return 0;
}