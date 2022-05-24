// chuyển hệ 2 -> hệ 10

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int bin, tam, chuso;
    int dec = 0;
    int i = 0;
    bool LaBin;
    do
    {
        LaBin = true;
        cout << "Nhap vao so nhi phan: ";
        cin >> bin;
        tam = bin;
        while (tam > 0 && LaBin)
        {
            if (tam % 10 > 1)
            {
                LaBin = false;
            } else {
                tam /= 10;
            }
        }
        if (!LaBin) {
            cout << "So nhi phan khong hop le. Nhap lai";
        }
    } while(!LaBin);

    tam = bin;
    while (tam > 0)
    {
        chuso = tam % 10;
        dec = dec + chuso * pow(2.0, i);
        tam /= 10;
        i++;
    }
    cout << "He thap phan: " << dec << endl;
    system("pause");
    return 0;
}