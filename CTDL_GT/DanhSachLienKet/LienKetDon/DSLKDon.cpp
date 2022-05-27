#include <iostream>

using namespace std;

struct node
{
    int value;
    node *next;
};

void init(node *&head)
{
    head = NULL;
}

node* createNode(int x)
{
    node* p = new node;
    p->value = x;
    p->next = NULL;
    return p;
}

void addFirst(node *&head, int x)
{
    node *p = createNode(x);
    p->next = head;
    head = p;
}

void addLast(node *&head, int x)
{
    node *p = createNode(x);
    if ( head == NULL )
    {
        head = p;
    }
    else
    {
        node* last = head;
        while ( last->next != NULL)
        {
            last = last->next;
        }
        last->next = p;
    }
}

void addAfter(node *&head, int v, int x)
{
    node *p = createNode(x);
    node *q = head;

    while (q != NULL && q->value != v)
        q = q->next;
    if (q != NULL)
    {
        p->next = q->next;
        q->next = p;
    }
}

void deleteFirst(node *&head)
{
    if (head != NULL)
    {
        node *p = head;
        head = p->next;
        p->next = NULL;

        delete(p);
    }
}

void deleteLast(node *&head)
{
    if (head != NULL)
    {
        // Xac dinh nut cuoi cung va nut truoc cua cuoi cung
        node *last = head;
        node *previous = NULL;;
        while(last->next != NULL)
        {
            previous = last;
            last = last->next;
        }

        if (previous == NULL)
        {
            deleteFirst(head);
        }
        else
        {// Xoa phan tu cuoi cung
            previous->next = NULL;
            delete(last);
        }
    }
}

void deleteNode(node *head, int v)
{
    if (head != NULL)
    {
        node *p = head;
        node *previous = NULL;

        while(p != NULL && p->value != v)
        {
            previous = p;
            p = p->next;
        }

        if (p != NULL) // Tim thay phan tu can xoa
        {
            if (previous = NULL) // DS chi co 1 phan tu
            {
                deleteFirst(head);
            }
            else
            {       
                previous->next = p->next;
                p->next = NULL;

                delete(p);
            }
        }
    }
}

void clean(node *&head)
{
    node *p = head;
    while (head != NULL)
    {
        deleteFirst(head);
    }
}

void output(node *head)
{
    node *p = head;
    while (p != NULL)
    {
        cout << p->value << "\t";
        p = p->next;
    }
}

int main()
{
    node *head;
    init(head);

    addLast(head, 7);
    addFirst(head, 10);
    addFirst(head, 15);
    addLast(head, 100);
    addFirst(head, 9);
    addLast(head, 99);

    output(head);
    cout << endl;
    addAfter(head, 100, 1000);
    output(head);
    cout << endl;

    deleteFirst(head);
    output(head);
    cout << endl;

    deleteLast(head);
    output(head);
    cout << endl;

    deleteNode(head, 100);
    output(head);

    clean(head);
    if ( head == NULL )
        cout << "DANH SACH RONG";
    return 0;
}