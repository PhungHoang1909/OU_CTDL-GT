#include <iostream>
#include <cstdlib>

using namespace std;

#define MAX 100

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void heapify(int a[], int n, int i)
{
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    if (left < n && a[left] > a[largest])
        largest = left;
    if(right < n && a[right] > a[largest])
        largest = right;
    if(largest != i)
    {
        swap(a[i], a[largest]);
        heapify(a, n, largest);
    }
}

void minheapify(int a[], int n, int i)
{
    int smallest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    if (left < n && a[left] < a[smallest])
        smallest = left;
    if(right < n && a[right] < a[smallest])
        smallest = right;
    if(smallest != i)
    {
        swap(a[i], a[smallest]);
        heapify(a, n, smallest);
    }
}

void heapSort_min(int a[], int n)
{
    for(int i = n/2 - 1; i >= 0; i--)
        minheapify(a, n, i);
    for(int i = n - 1; i >= 0; i--)
    {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}

int main()
{
    int arr1[MAX];
    int n = 5;
    cout << "Input: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    heapSort_min(arr1, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
}