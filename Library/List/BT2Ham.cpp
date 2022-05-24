/*
1. Để lấy giá trị đầu tiên trong list, ta dùng hàm front().
2. Để lấy giá trị cuối cùng trong list, ta dùng hàm back().
3. Để kiểm tra list có rỗng hay không, ta dùng hàm empty() 
(hàm trả về true nếu list rỗng, ngược lại trả về false).
4. Để lấy kích thước (số phần tử) của list, ta dùng hàm size().
*/

/*
Cho một list line gồm các số nguyên.

Hãy tính tổng phẩn tử đầu tiên và phần tử cuối cùng trong list đó, 
nếu list rỗng trả về -1, còn nếu list chỉ có một phần tử thì trả về phần tử đó.
*/

#include <iostream>
#include <list>
#include <vector>

using namespace std;

int sum(list<int> linkedList)
{
    if (linkedList.size() == 0) return -1;
    if (linkedList.size() == 1) return linkedList.front();
    return linkedList.front() + linkedList.back();
}

int veriffy(vector<int> v)
{
    list<int> l(v.begin(), v.end());
    return sum(l);
}