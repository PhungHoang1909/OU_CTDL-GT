/*
Cho một ma trận gồm các dãy nhị phân khác nhau.

Hãy đưa ra các dãy nhị phân khác nhau trong ma trận đó.
*/

#include <iostream>
#include <set>
#include <vector>

using namespace std;

std::vector<std::vector<int>> uniqueRows(std::vector<std::vector<int>> matrix)
{
    set<vector<int>> s;
    vector<vector<int>> result;

    for(std::vector<std::vector<int>>::iterator it = matrix.begin();it!=matrix.end();it++){
        if(!s.count(*it)){
           s.insert(*it);
           result.push_back(*it);
           }
    }
    return result;
}

/*
Để duyệt vector theo chiều thuận (từ trái qua phải) ta làm như sau:

for (vector<int>::iterator it = a.begin(); it !=a.end(); it++)
hoặc

for (vector<int>::const_iterator it = a.cbegin(); it !=a.cend(); it++)
Cách duyệt phía dưới cũng giống cách trên, nhưng với cách dưới, bạn không thể thay đổi giá trị mà con trỏ đang trỏ đến (Không thể gán *it=...).

Để duyệt vector theo chiều nghịch (từ phải qua trái) ta làm như sau:

	for (vector<int>::reverse_iterator it = a.rbegin(); it != a.rend(); it++)
*/