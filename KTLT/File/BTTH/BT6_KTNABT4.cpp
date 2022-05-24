/*Bài 6. Viết chương trình đọc các ký tự trong BT4.txt. Kiểm tra xem ký tự nào là nguyên
âm, nếu đúng thì ghi ra file BT6.txt. Mở file BT6.txt để kiểm tra.*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    char kt;
    int i = 0;
    ifstream iFile;
    ofstream oFile;
    iFile.open("BT4.txt", ios::in);
    oFile.open("BT6.txt", ios::out);
    if(iFile.is_open())
    {
        while(!iFile.eof())
        {
            iFile >> kt;
            if(kt == 'u' || kt == 'e' || kt == 'o' || kt == 'a' || kt == 'i');
                oFile << kt;
            i++;
        }
        iFile.close();
    }
    oFile.close();
    cout << "So lan lam: " << i << endl;
    system("pause");
    return 0;
}