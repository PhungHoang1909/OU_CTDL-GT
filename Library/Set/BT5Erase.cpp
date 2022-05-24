/*
Cho hai dãy arr1 và arr2 thuộc kiểu vetor<string>. Bạn tạo một dãy từ hai dãy trên theo điều kiện sau:

Kết quả chỉ chứa các chuôi riêng biệt (Không có hai chuỗi nào giống nhau).
Kết quả chứa các phần tử trong arr1 mà không xuất hiện trong arr2.
Các phần tử các dãy kết quả được sắp xếp theo thứ tự từ điểm từ nhỏ đến lớn.
*/

#include <iostream>
#include <set>
#include <vector>

using namespace std;

std::vector<std::string> mergeStringArr(std::vector<std::string> arr1, std::vector<std::string> arr2)
{
    std::set<std::string> resSet (arr1.begin(), arr1.end());
    for (auto str : arr2)
    {
        auto search = resSet.find(str);
        if (search != resSet.end()) // found
        {
            resSet.erase(search);
        }
    }
    std::vector<std::string> res (resSet.begin(), resSet.end());
    return res;
}