#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a[5][3], i, j;
    i = 0;
    while (i < 5)
    {
        j = 0;
        while (j < 3)
        {
            a[i][j] = rand() % 10;
            j++;
        }
        i++;
    }
    i = 0;
    while (i < 5)
    {
        j = 0;
        while (j < 3)
        {
            cout << a[i][j] << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}