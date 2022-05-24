/*
Cho hai stack st1 và st2 đã được sắp xếp theo tứ tự không giảm.

Hãy ghép hai stack đó thành một, 
yêu cầu là stack mới cũng sắp xếp không giảm.
*/


#include <iostream>
#include <vector>
#include <stack>

using namespace std;

std::vector<int> stackConcat(std::vector<int> a, std::vector<int> b)
{
    stack<int> st1, st2;
    std::vector<int> v;
    for (int i = 0; i < a.size(); i++) {
        st1.push(a[i]);
    }
    for (int i = 0; i < b.size(); i++) {
        st2.push(b[i]);
    }
    stack<int> st3;
    while(!st1.empty() && !st2.empty()) {
        if (st1.top() > st2.top()) {
            st3.push(st1.top());
            st1.pop();
        } else{
            st3.push(st2.top());
            st2.pop();
        }
    }
    while(!st1.empty()){
		st3.push(st1.top());
		st1.pop();
	}
	while(!st2.empty()){
		st3.push(st2.top());
		st2.pop();
	}
	while(!st3.empty()){
		v.push_back(st3.top());
		st3.pop();
	}
    return v;
}