#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct Sach
{
    string masach;
    string tensach;
    int namxb;
};

const int MAX = 20;

void Nhap1Sach(Sach &s)
{
    cin.ignore();
    cout << "Nhap ma sach: ";
    getline(cin, s.masach);
    cout << "Nhap ten sach: ";
    getline(cin, s.tensach);
    cout << "Nhap nam xuat ban: ";
    cin >> s.namxb;
    cout << endl;
}

void NhapDSSach(Sach ds[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap sach thu " << i + 1 << endl;
        Nhap1Sach(ds[i]);
    }
}

void Xuat1Sach(Sach s)
{
    cout << "Ma sach: " << s.masach << endl;
    cout << "Ten sach: " << s.tensach << endl;
    cout << "Nam xuat ban: " << s.namxb << endl;
}

void SapXep(Sach s[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (s[i].namxb > s[j].namxb)
            {
                Sach temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}

void DocFile(Sach *&s1, int &n)
{
    ifstream iFile;
    string s;
    int dem = 0;
    iFile.open("BT2.txt");
    if (iFile.is_open())
    {
        while(!iFile.eof())
        {
            getline(iFile, s);
            if (s == "")
                break;
            dem++;
        }
        iFile.close();
        n = dem;
        s1 = new Sach[n];
        iFile.open("BT2.txt");
        {
            for (int i = 0; i < n; i++)
            {
                getline(iFile, s1[i].masach, '#');
                getline(iFile, s1[i].tensach, '#');
                iFile >> s1[i].namxb;
                iFile.ignore();
            }
            iFile.close();
        }
    }
    else
        cout << "Doc File khong thanh cong!" << endl;
}

int DemSach(Sach s[], int n)
{
    int dem = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i].namxb == 2019)
            dem++;
    }
    return dem;
}

// int main()
// {
//     Sach* s;
//     int n;
//     do
//     {
//         cout << "Nhap so luong sach: ";
//         cin >> n;
//         if (n < 0 || n > MAX)
//             cout << "Nhap sai, nhap lai!" << endl;
//     } while (n < 0 || n > MAX);
//     s = new Sach[n];
//     NhapDSSach(s, n);
//     cout << "Xuat danh sach sach ban dau: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Xuat sach thu " << i + 1 << endl;
//         Xuat1Sach(s[i]);
//     }
//     cout << endl;
//     cout << "Xuat sach theo nam xuat ban tang dan:\n";
//     SapXep(s, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Xuat sach thu " << i + 1 << endl;
//         Xuat1Sach(s[i]);
//     }
//     cout << endl;
//     cout << "So luong sach xuat ban vao nam 2019: " << DemSach(s, n) << endl;
//     cout << "\nDoc file BT2:\n";
//     DocFile(s, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << "Xuat sach thu " << i + 1 << endl;
//         Xuat1Sach(s[i]);
//     }
//     delete[] s;
//     s = 0;
//     return 0;
// }

int main()
{
    Sach *s;
    int n, chon;
    do
    {
        cout << "Nhap so luong sach: ";
        cin >> n;
        if (n <= 0 || n > MAX)
            cout << "Nhap sai so luong, nhap lai!" << endl;
    } while(n <= 0 || n > MAX);
    s = new Sach[n];
    do
    {
        cout << "\n--Menu chuc nang--" << endl;
        cout << "1. Nhap thong tin Sach" << endl;
        cout << "2. Xuat thong tin Sach ban dau" << endl;
        cout << "3. Xuat Sach theo sap xep ngay xuat ban tang dan" << endl;
        cout << "4. Dem sach xuat ban tu nam 2019" << endl;
        cout << "5. Doc file BT2.txt" << endl;
        cout << "6. Thoat" << endl;
        do
        {
            cout << "Chon chuc nang: ";
            cin >> chon;
            if (chon < 1 || chon > 6)
                cout << "Chuc nang khong hop le!" << endl;
        } while (chon < 1 || chon > 6);
        if (chon >= 1 && chon <= 5)
        {
            switch (chon)
            {
            case 1:
                NhapDSSach(s, n);
                break;
            case 2:
                cout << "Xuat danh sach sach ban dau: " << endl;
                for (int i = 0; i < n; i++)
                {
                    cout << "Xuat sach thu " << i + 1 << endl;
                    Xuat1Sach(s[i]);
                }
                cout << endl;
                break;
            case 3:
                cout << "\nXuat sach theo nam xuat ban tang dan:\n";
                SapXep(s, n);
                for (int i = 0; i < n; i++)
                {
                    cout << "Xuat sach thu " << i + 1 << endl;
                    Xuat1Sach(s[i]);
                }
                cout << endl;
                break;
            case 4:
                cout << "So luong sach xuat ban vao nam 2019: " << DemSach(s, n) << endl;
                break;
            case 5:
                cout << "\nDoc file BT2:\n";
                DocFile(s, n);
                for (int i = 0; i < n; i++)
                {
                    cout << "Xuat sach thu " << i + 1 << endl;
                    Xuat1Sach(s[i]);
                }
                break;  
            default:
                break;
            system("pause");
            }
        } 
        else
            break;
    } while (true);
    delete[] s;
    s = 0;
    return 0; 
}