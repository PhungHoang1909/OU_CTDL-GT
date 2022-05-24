/*
Cho một vector chứa các số nguyên.

Hãy đưa ra số lượng phần tử khác nhau trong vector đó.
*/

#include <iostream>
#include <set>
#include <vector>

using namespace std;

int differentNumbers(vector<int> inputVector)
{
    set<int> s;
    for (int i = 0; i < inputVector.size(); i++) {
        s.insert(inputVector[i]);
    }   
    return s.size();
}