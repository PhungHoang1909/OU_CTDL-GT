/*
Bạn được cho một dãy các số nguyên arr và số nguyên dương k, 
nhiệm vụ của bạn là xóa đi k số đầu tiên mà nhỏ hơn số đứng ngay sau nó (xóa arr[i] nếu arr[i + 1] > arr[i])
. Lưu ý nếu xóa arr[i + 1] thì arr[i + 2] trở thành số đứng ngay sau arr[i], arr[i + 3] đứng sau arr[i + 2]...

Ví dụ

Cho arr = [20,10,25,30,40], k = 2, removeElements(arr, k) = [25,30,40]
Sau khi xóa 10 thì 20 trở nên nhỏ hơn 25 nên xóa tiếp 20. Lúc này đã xóa đủ 3 phần tử nên [25,30,40] là kết quả trả về.
Đầu vào luôn thỏa mãn trong dãy số luôn có nhiều hơn hoặc đủ k phần tử dể xóa.
*/

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

std::vector<int> removeElements(std::vector<int> arr, int k)
{
    stack <int> ms;
    vector <int> ans1, ans2;
    for (int i = 0; i < arr.size(); i++)
    {
        if (ms.empty() || arr[i] <= ms.top())
        {
            ms.push(arr[i]);
        }
        else 
        {
            while(!ms.empty() && ms.top() < arr[i] && k > 0)
            {
                ms.pop();
                k--;
            }
        }
        if (k == 0)
        {
            while (!ms.empty())
            {
                ans1.push_back(ms.top());
                ms.pop();
            }
            reverse(ans1.begin(), ans1.end());
            for (int j = i; j < arr.size(); j++)
                ans1.push_back(arr[j]);
            break;
        }
        if (ms.empty())
            ms.push(arr[i]);
    }
    return ans1;
}