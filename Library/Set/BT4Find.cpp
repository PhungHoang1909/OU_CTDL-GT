/*
Cho một dãy gồm các số nguyên và một số nguyên k.

Hãy kiểm tra xem trong dãy đó có phần tử giá trị k hay không, trả về true nếu có, false nếu không.
*/

#include <iostream>
#include <set>
#include <vector>

using namespace std;

bool setFind(std::vector<int> arr, int k)
{
    std::set<int> s(arr.begin(), arr.end());
    std::set<int>:: iterator it = s.find(k);
    return it != s.end();
}
