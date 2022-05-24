#include <iostream>
#include <iomanip>

using namespace std;

void KHOITAO(char A[][6], int m, int n)
{
    for(int i=0; i<13; i++)
        for(int j=0; j<6; j++)
            A[i][j] = '*';
}

void XUAT(char A[][6], int m, int n)
{
    cout <<setw(12)<<"A"<<setw(4)<<"B"<<setw(4)<<"C"<<setw(4)<<"D"<<setw(4)<<"E"<<setw(4)<<"F"<<endl;
    for(int i=0; i<13; i++)
    {
        cout <<"Hang"<<setw(4)<<i+1;
        for(int j=0; j<6; j++)
            cout <<setw(4)<<A[i][j];
        cout << endl;
    }
}

void XUAT_1(char A[][6], int m, int n) //Xuat hang thuong gia
{
    cout <<setw(12)<<"A"<<setw(4)<<"B"<<setw(4)<<"C"<<setw(4)<<"D"<<setw(4)<<"E"<<setw(4)<<"F"<<endl;
    for(int i=0; i<2; i++)
    {
        cout <<"Hang"<<setw(4)<<i+1;
        for(int j=0; j<6; j++)
            cout <<setw(4)<<A[i][j];
        cout << endl;
}

}
void XUAT_2(char A[][6], int m, int n) //Xuat hang pho thong
{
    cout <<setw(12)<<"A"<<setw(4)<<"B"<<setw(4)<<"C"<<setw(4)<<"D"<<setw(4)<<"E"<<setw(4)<<"F"<<endl;
    for(int i=2; i<7; i++)
    {
        cout <<"Hang"<<setw(4)<<i+1;
        for(int j=0; j<6; j++)
            cout <<setw(4)<<A[i][j];
        cout << endl;
    }
}

void XUAT_3(char A[][6], int m, int n) //Xuat hang tiet kiem
{
    cout <<setw(12)<<"A"<<setw(4)<<"B"<<setw(4)<<"C"<<setw(4)<<"D"<<setw(4)<<"E"<<setw(4)<<"F"<<endl;
    for(int i=7; i<13; i++)
    {
        cout <<"Hang"<<setw(4)<<i+1;
        for(int j=0; j<6; j++)
            cout <<setw(4)<<A[i][j];
        cout << endl;
    }
}

void DATVE(char A[][6], int m, int n, int &hang, char &ghe)
{
    do
    {
    cout <<"De nghi chon ve hang: ";
    cin >> hang;
    cout <<"De nghi chon ve ghe: ";
    cin >> ghe;
    if (ghe >'Z')
        ghe = ghe-32;
    if (hang<1 || hang >13 || ghe<'A' || ghe >'F')
        cout << "Nhap sai nhap lai!\n";
    }while(hang<1 || hang >13 || ghe<'A' || ghe >'F');
    hang = hang - 1;
    ghe = (int)ghe - 65;
}

void KTVE(char A[][6], int m, int n, int hang, char ghe)
{
    if(A[hang][ghe] == '*')
    {
        cout << "\nBan dat ve thanh cong";
        A[hang][ghe] = 'X';
    } else
        cout << "\nBan dat ve khong thanh cong";
    cout << endl;
}

void Menu()
{
    cout <<"\n1. Chon hang thuong gia";
    cout <<"\n2. Chon hang pho thong";
    cout <<"\n3. Chon hang tiet kiem";
    cout <<"\nChon 1, 2 hoac 3: ";
}

int main()
{
    char A[13][6], TT, chon, ghe;
    int hang;
    KHOITAO(A, 13, 6);
    do
    {
        system("cls");
        cout <<"Chuong trinh dat ve may bay\n";
        XUAT(A, 13, 6);
        Menu();
        cin >> chon;
        switch(chon)
        {
            case '1':
                cout << "\nBan dang chon ve hang thuong gia:\n";
                XUAT_1(A, 13, 6);
                DATVE(A, 13, 6, hang, ghe);
                if(hang>=0 && hang <2)
                {
                    KTVE(A, 13, 6, hang, ghe);
                    XUAT_1(A, 13, 6);
                } else
                    cout << "Ban chon sai hang!";
                break;
            case '2':
                cout << "\nBan dang chon ve hang pho thong:\n";
                XUAT_2(A, 13, 6);
                DATVE(A, 13, 6, hang, ghe);
                if(hang>=2 && hang <7)
                {
                    KTVE(A, 13, 6, hang, ghe);
                    XUAT_2(A, 13, 6);
                } else
                    cout << "Ban chon sai hang!";
                break;
            case '3':
                cout << "\nBan dang chon ve hang tiet kiem:\n";
                XUAT_3(A, 13, 6);
                DATVE(A, 13, 6, hang, ghe);
                if(hang >= 7 && hang <13)
                {
                    KTVE(A, 13, 6, hang, ghe);
                    XUAT_3(A, 13, 6);
                } else
                    cout << "Ban chon sai hang!";
                break;
            default:
                cout <<"\nBan chon sai!, Chon 1, 2 hoac 3";
        }
        cout <<"\nBan co tiep tuc khong? (Y/N): ";
        cin >> TT;
    }while (TT=='Y' || TT=='y');
    system("cls");
    XUAT(A, 13, 6);
    system("pause");
    return 0;
}