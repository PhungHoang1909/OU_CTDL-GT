
// Cho trước một list line. Hãy tính tổng các phần tử trong list.

#include <iostream>
#include <vector>
#include <list>

using namespace std;

int sumOfAllElements(list<int> linkedList)
{
	int sum = 0;
	for (list<int>:: iterator i=linkedList.begin(); i != linkedList.end(); i++){
		sum += *i;
	}
	return sum;
}

int verifyFunction(vector<int> v)
{
	list<int> l(v.begin(), v.end());
	return sumOfAllElements(l);
}