#include <iostream>
#include <string>

using namespace std;

struct HocVien
{
    int mahv;
    string tenHV;
    int namsinh;
};

struct nodeHV
{
    HocVien hv;
    nodeHV *next;
};

void outputHV(HocVien h)
{
    cout << "Ma HV: " << h.mahv << endl;
    cout << "Ten HV: " << h.tenHV << endl;
    cout << "Nam sinh HV: " << h.namsinh << endl;
    cout << "============" << endl;
}

void init(nodeHV *&head)
{
    head = NULL;
}

nodeHV* createNode(HocVien x)
{
    nodeHV* p = new nodeHV;
    p->hv = x;
    p->next = NULL;
    return p;
}

void addFirst(nodeHV *&head, HocVien x)
{
    nodeHV *p = createNode(x);
    p->next = head;
    head = p;
}

void output(nodeHV *head)
{
    nodeHV *p = head;
    while (p != NULL)
    {
        outputHV(p->hv);
        p = p->next;
    }
}

int main()
{
    HocVien h1;
    h1.mahv = 1;
    h1.tenHV = "Phung Hoang";
    h1.namsinh = 2003;
    
    HocVien h2;
    h2.mahv = 2;
    h2.tenHV = "Celestia Elaina";
    h2.namsinh = 2000;

    nodeHV *head;

    init(head);
    addFirst(head, h2);
    addFirst(head, h1);

    output(head);
}