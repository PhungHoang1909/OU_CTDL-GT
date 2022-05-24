/*
ho một string, nhiệm vụ của bạn là viết hàm đảo ngược string này bằng std::stack. */

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

string reverseString(string s)
{
    string res;
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        st.push(s[i]);
    }
    while(st.empty() == false) {
        res = res + st.top();
        st.pop();
    }
    return res;
}

int main()
{
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    cout << "Dao nguoc: " << reverseString(s);
    return 0;
}