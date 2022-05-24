#include <iostream>

using namespace std;

int main()
{
    double arr[] = { 1.5, 2.5, 3.5, 4.5, 5.5};
    double* p = &arr[0];
    for (int i = 0; i < 5; i++) {
        cout << (int)(p + i) << " ";
    }
    return 0;
}