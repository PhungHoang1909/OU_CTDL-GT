/*
Nhập vào một số nguyên dương n, tiếp theo là n số nguyên của một dãy số, 
hãy cài đặt nó vào một danh sách liên kết đơn, tiếp theo nhập số nguyên k (0 ≤ k < n).
Hãy đưa ra giá trị phần tử ở chỉ số k.
*/

#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

node *createNode(int x)
{
    node *temp = new node;
    temp->next  = NULL;
    temp->data = x;
    return temp;
}

void printList(node *l)
{
    node *p = l;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

node *addElement(node *p, int x)
{
    node *temp = createNode(x);
    p->next = temp;
    return temp;
}

node *getNode(node *l, int k)
{
    node *p = l;
    for (int i = 0; i < k; i++)
        p = p->next;
    return p;
}

int main()
{
    int n, x, k;
    cin >> n;
    cin >> x;
    node *l = createNode(x);
    node *p = l;
    for (int i = 1; i < n; i++)
    {
        cin >> x;
        p = addElement(p, x);
    }
    cin >> k;
    p = getNode(l, k);
    cout << p->data;
    return 0;
}