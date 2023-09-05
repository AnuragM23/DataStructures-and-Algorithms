#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *InsertionAtTheBeginning(Node *head, int Data)
{
    Node *temp = new Node(Data);
    temp->next = head;
    return temp;
}

Node *InsertionAtTheEnd(Node *head, int Data)
{
    Node *p = head;
    Node *temp = new Node(Data);
    if (head == NULL)
        return temp;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = temp;
    return head;
}

void deleteNode(Node *&head, int position)
{
    // Positions are in the range [1, len(LL)]
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return;
    }
    else
    {
        struct Node *p = head;
        struct Node *q = head->next;
        for (int i = 1; i < position - 1; i++)
        {
            p = p->next;
            q = q->next;
        }

        p->next = q->next;
        free(q);
        return;
    }
}

void deleteNodeByValue(Node *&head, int value)
{

    Node *p = head->next;
    Node *q = head;
    if (q->data == value)
    {
        head = p;
        free(q);
    }

    while (p != NULL)
    {
        if (p->data == value)
        {
            q->next = p->next;
            free(p);
            return;
        }
        p = p->next;
        q = q->next;
    }
}

void printLL(Node *head)
{
    Node *temp = head;
    cout << endl;
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(1);
    head = InsertionAtTheBeginning(head, 2);
    head = InsertionAtTheBeginning(head, 3);
    head = InsertionAtTheBeginning(head, 4);
    head = InsertionAtTheBeginning(head, 5);
    printLL(head);
    deleteNodeByValue(head, 3);
    printLL(head);
    return 0;
}
