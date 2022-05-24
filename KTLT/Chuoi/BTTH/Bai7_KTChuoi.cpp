/*
Bài 7. Xây dựng hàm nhận vào 2 chuỗi ký tự s1 và s2. Tìm xem s2 có xuất hiện trong s1 hay
không? Nếu có thì trả con trỏ về địa chỉ xuất hiện đầu tiên, nếu không trả về NULL.
Viết chương trình cho nhập vào 2 chuỗi, gọi hàm vừa xây dựng ở trên, dựa trên giá trị trả về
cho biết vị trí phần tử xuất hiện đầu tiên của s2 trong s1.
Cho phép người dùng nhập chuỗi s3. Tiến hành thay thế chuỗi s2 trong s1 bằng s3.
*/

#include <iostream>
#include <cstring>

using namespace std;

int *KTS1S2(char *s1, char *s2, int n1, int n2)
{
    int* p = NULL;
    for (int i = 0; i <= (n1- n2); i++)
        if(!strncmp(s2, s1+i, n2))
        {
            p = &i;
            return p;
        }
    return p;
}

int main()
{
    char s1[51], s2[51];
    cout << "Nhap chuoi s1: ";
    cin.getline(s1, 50);
    int n1 = strlen(s1);
    cout << "Nhap chuoi s2: ";
    cin.getline(s2, 50);
    int n2 = strlen(s2);
    if (KTS1S2(s1, s2, n1, n2))
        cout << "Vi tri xuat hien cua s2 trong s1: " << *(KTS1S2(s1, s2, n1, n2)) << endl;
    else
        cout << "Khong tim thay s2 trong s1 " << endl;
    char s3[51];
    cout << "Nhap chuoi s3: ";
    cin.getline(s3, 50);
    int n3 = strlen(s3);
    system("pause");
    return 0;
}

