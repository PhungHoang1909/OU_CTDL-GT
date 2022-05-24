#include<iostream>

using namespace std;

int main() {
    int n;
    int* arr;
    cin >> n;
    arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] % 3 == 0 && arr[i] % 5 != 0) {
            cout << arr[i] << " ";
        }
    }
    delete[]arr;
    return 0;
}