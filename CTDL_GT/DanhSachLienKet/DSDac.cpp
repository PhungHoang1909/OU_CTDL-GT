// #include <iostream>

// #define  MAX 100

// using namespace std;

// void nhapDSDac(int a[], int &n)
// {
//     cout << "Nhap so phan tu: ";
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         cout << "Nhap phan tu a[" << i << "] = ";
//         cin >> a[i];
//     }
// }

// int timPTDau(const int a[], const int n, const int x)
// {
//     int vt = -1;

//     for (int i = 0; i < n; i++)
//         if (a[i] == x)
//         {
//             vt = i;
//             break;
//         }
//     return vt;
// }

// int timPTCuoi(const int a[], const int n, const int x)
// {
//     int vt = -1;

//     for (int i = 0; i < n; i++)
//         if (a[i] == x)
//         {
//             vt = i;
//         }
//     return vt;
// }

// bool chenPT(int a[], int &n, int vt, int gt)
// {
//     if (vt < 0  || vt > n)
//         return false;
    
//     n++;
//     for (int i = n; i >= vt + 1; i--)
//         a[i] = a[i - 1];
//     a[vt] = gt;

//     return true;
// }

// bool xoaPT(int a[], int &n, int vtxoa)
// {
//     if (vtxoa >= 0 && vtxoa < n)
//     {
//         for (int i = vtxoa; i < n - 1; i++)
//             a[i] = a[i + 1];
//         n--;
//         return true;
//     }
//     else
//         return false;
// }

// void xuatDSDac(const int a[], const int n)
// {
//     cout << "Xuat danh sach:\n";

//     for (int i = 0; i < n; i++)
//     {
//         cout << a[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int a[MAX], n;
//     nhapDSDac(a, n);
//     xuatDSDac(a, n);
//     int x;
//     cout << "Nhap phan tu x can tim: ";
//     cin >> x;
//     int vtd = timPTDau(a, n, x);
//     if (vtd == -1)
//         cout << "Khong tim thay " << x << endl;
//     else
//         cout << "Tim thay " << x << " dau tien tai " << vtd << endl;

//     int vtc = timPTCuoi(a, n, x);
//     if (vtc == -1)
//         cout << "Khong tim thay " << x << endl;
//     else
//         cout << "Tim thay " << x << " cuoi cung tai " << vtc << endl;

//     int gt, vt;
//     cout << "Nhap gia tri can chen: ";
//     cin >> gt;
//     cout << "Nhap vi tri can chen: ";
//     cin >> vt;
//     chenPT(a, n, vt, gt);
//     cout << "==== XUAT DS SAU KHI CHEN ===\n";
//     xuatDSDac(a, n);

//     int vtxoa;
//     cout << "Nhap vi tri phan tu can xoa: ";
//     cin >> vtxoa;
//     if ( xoaPT(a, n, vtxoa) == true)
//         xuatDSDac(a, n);
//     else
//         cout << "Xoa khong thanh cong" << endl;
//     return 0;   
// }

#include <iostream>

#define  MAX 100

using namespace std;

struct DSDac
{
    int a[MAX];
    int n;
};

void nhapDSDac(DSDac &ds)
{
    cout << "Nhap so phan tu: ";
    cin >> ds.n;

    for (int i = 0; i < ds.n; i++)
    {
        cout << "Nhap phan tu a[" << i << "] = ";
        cin >> ds.a[i];
    }
}

int timPTDau(DSDac ds, const int x)
{
    int vt = -1;

    for (int i = 0; i < ds.n; i++)
        if (ds.a[i] == x)
        {
            vt = i;
            break;
        }
    return vt;
}

int timPTCuoi(DSDac ds, const int x)
{
    int vt = -1;

    for (int i = 0; i < ds.n; i++)
        if (ds.a[i] == x)
        {
            vt = i;
        }
    return vt;
}

bool chenPT(DSDac &ds, int vt, int gt)
{
    if (vt < 0  || vt > ds.n)
        return false;
    
    ds.n++;
    for (int i = ds.n; i >= vt + 1; i--)
        ds.a[i] = ds.a[i - 1];
    ds.a[vt] = gt;

    return true;
}

bool xoaPT(DSDac &ds, int vtxoa)
{
    if (vtxoa >= 0 && vtxoa < ds.n)
    {
        for (int i = vtxoa; i < ds.n - 1; i++)
            ds.a[i] = ds.a[i + 1];
        ds.n--;
        return true;
    }
    else
        return false;
}

void xuatDSDac(DSDac ds)
{
    cout << "Xuat danh sach:\n";

    for (int i = 0; i < ds.n; i++)
    {
        cout << ds.a[i] << " ";
    }
    cout << endl;
}

int main()
{
    DSDac ds;
    nhapDSDac(ds);
    xuatDSDac(ds);
    int x;
    cout << "Nhap phan tu x can tim: ";
    cin >> x;
    int vtd = timPTDau(ds, x);
    if (vtd == -1)
        cout << "Khong tim thay " << x << endl;
    else
        cout << "Tim thay " << x << " dau tien tai " << vtd << endl;

    int vtc = timPTCuoi(ds, x);
    if (vtc == -1)
        cout << "Khong tim thay " << x << endl;
    else
        cout << "Tim thay " << x << " cuoi cung tai " << vtc << endl;

    int gt, vt;
    cout << "Nhap gia tri can chen: ";
    cin >> gt;
    cout << "Nhap vi tri can chen: ";
    cin >> vt;
    chenPT(ds, vt, gt);
    cout << "==== XUAT DS SAU KHI CHEN ===\n";
    xuatDSDac(ds);

    int vtxoa;
    cout << "Nhap vi tri phan tu can xoa: ";
    cin >> vtxoa;
    if ( xoaPT(ds, vtxoa) == true)
        xuatDSDac(ds);
    else
        cout << "Xoa khong thanh cong" << endl;
    return 0;   
}