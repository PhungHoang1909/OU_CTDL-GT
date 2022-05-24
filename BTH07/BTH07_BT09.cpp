/*
Viết hàm nhận vào 3 số ngày, tháng, năm; trả về số ngày cách ngày đầu tiên trong
năm. Viết chương trình kiểm tra hàm vừa viết.
*/

#include <iostream>

using namespace std;

bool lanamnhuan(int nam);
int tinhngaytrongthang(int thang, int nam);
bool langayhople(int ngay, int thang, int nam);
int tinhngaytrongnam(int ngay, int thang, int nam);

int main()
{
    int ngay, thang, nam;
    cout << "Nhap ngay: ";
    cin >> ngay;
    cout << "Nhap thang: ";
    cin >> thang;
    cout << "Nhap nam: ";
    cin >> nam;
    if (langayhople(ngay, thang, nam))
    {
        int count = tinhngaytrongnam(ngay, thang, nam);
        cout << "Ngay thu: " << count << endl;
    } else {
        cout << "Ngay khong hop le" << endl;
    }
    system("pause");
    return 0;
}

bool lanamnhuan(int nam)
{
    if (nam % 400 == 0 || nam % 4 == 0 && nam % 100 != 0)
    {
        return true;
    } else {
        return false;
    }
}

int tinhngaytrongthang(int thang, int nam)
{
    int ngaytrongthang;
    switch(thang)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        {
            ngaytrongthang = 31;
            break;
        }
        case 4:
        case 6:
        case 9:
        case 11:
        {
            ngaytrongthang = 30;
            break;
        }
        case 2:
        if (lanamnhuan(nam))
        {
            ngaytrongthang = 29;
        } else {
            ngaytrongthang = 28;
        }
        break;
    }
    return ngaytrongthang;
}

bool langayhople(int ngay, int thang, int nam)
{
    bool result = true;
    if (!(nam > 0 && thang))
    {
        result = false;
    }
    if (!(thang >= 1 && thang <= 12))
    {
        result = false;
    }
    if (!(ngay >= 1 && ngay <= tinhngaytrongthang(thang, nam)))
    {
        result = false;
    }
    return result;
}

int tinhngaytrongnam(int ngay, int thang, int nam)
{
    int count = ngay;
    for (int i = 1; i <= thang - 1; i++)
    {
        count = count + tinhngaytrongthang(i, nam);
    }
    return count;
}