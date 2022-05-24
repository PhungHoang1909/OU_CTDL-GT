/*
Bạn được cho một chuỗi s đã được mã hóa, hãy viết hàm giải mã chuỗi này. Xem ví dụ để hiểu rõ hơn về cách giải mã.

Ví dụ

s = "3[a]", decodeString(s) = "aaa".
s = "3[ab]", decodeString(s) = "ababab".
s = "3[b2[ca]]", decodeString(s) = "bcacabcacabcaca".
s = "3[a3[b]1[ab]]", decodeString(s) = "abbbababbbababbbab".
*/

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void repeat(stack <char> &ms, string str, int num)
{
    string res = "";
    for (int i = 0; i < num; i++)
        for (auto x : str)
        	ms.push(x);
}

std::string decodeString(std::string s)
{
    stack <char> ms;
    for (auto x : s)
    {
        if (x == ']')
        {
            string chr;
            string ans = "";
            int num = 0, base = 1;
            while (ms.top() != '[')
            {
                chr = ms.top();
                ms.pop();
                ans = chr + ans;
            }
            ms.pop();
            while (!ms.empty() && '0' <= ms.top() && ms.top() <= '9')
            {
                num += (ms.top() - '0')*base;
                base *= 10;
                ms.pop();
            }
            repeat(ms, ans, num);
        }
        else
            ms.push(x);
    }
    string res = "";
    while(!ms.empty())
	{
		char x = ms.top();
    	res.push_back(x);
    	ms.pop();
	}
	reverse(res.begin(), res.end());
    return res;
}