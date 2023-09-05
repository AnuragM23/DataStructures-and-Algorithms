#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

void InsertAtTheFirst(Node *&head, int Data)
{
    Node *temp = new Node(Data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

void InsertAtTheEnd(Node *&head, int Data)
{
    Node *p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    Node *temp = new Node(Data);
    temp->prev = p;
    p->next = temp;
}

void DeleteNode(Node *&head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
    }
    else
    {
        Node *p = head;
        Node *q = head->next;
        for (int i = 1; i < position - 1; i++)
        {
            p = p->next;
            q = q->next;
        }
        q->next->prev = p;
        p->next = q->next;
        free(q);
    }
}

int getLength(Node *head)
{
    int len = 0;
    Node *i = head;
    while (i != NULL)
    {
        len++;
        i = i->next;
    }
    return len;
}

void printLL(Node *head)
{
    Node *i = head;
    cout << endl;
    while (i != NULL)
    {
        cout << i->data << "  ";
        i = i->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(1);
    InsertAtTheFirst(head, 0);
    InsertAtTheEnd(head, 2);
    InsertAtTheEnd(head, 3);
    InsertAtTheEnd(head, 4);
    DeleteNode(head, 1);
    DeleteNode(head, 1);
    cout << getLength(head);
    printLL(head);
    return 0;
}