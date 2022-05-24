#include <iostream>

using namespace std;

int main() {
	int arr[] = { 1, 2, 3, 4, 5 };
	int* p = &arr[0];
	cout << (int)&arr[0] << endl;
	for (int i = 0; i < 5; i++) {
		cout << (int)(p+i) << " ";
	}
	return 0;
}