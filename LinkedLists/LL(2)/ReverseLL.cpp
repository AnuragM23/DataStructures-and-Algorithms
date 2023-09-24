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

// Brute Approach..
Node *ReverseListIterative(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *prev = NULL;
    Node *cur = head;
    Node *frwd = head->next;

    while (cur != NULL)
    {
        frwd = cur->next;

        cur->next = prev;
        prev = cur;
        cur = frwd;
    }
    return prev;
}

// Recursively...
void reverse(Node *&head, Node *cur, Node *prev)
{
    if (cur == NULL)
    {
        head = prev;
        return;
    }

    Node *frwd = cur->next;
    reverse(head, frwd, cur);
    cur->next = prev;
}
Node *ReverseListRecursive(Node *head)
{
    reverse(head, head, NULL);
    return head;
}

// Optimised Approach..
Node *ReverseLL(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *newHead = ReverseLL(head->next);

    head->next->next = head;
    head->next = NULL;
    return newHead;
}

int main()
{
    Node *head = new Node(1);
    head = InsertionAtTheBeginning(head, 2);
    head = InsertionAtTheBeginning(head, 3);
    head = InsertionAtTheBeginning(head, 4);
    head = InsertionAtTheBeginning(head, 5);
    head = InsertionAtTheBeginning(head, 6);
    printLL(head);
    head = ReverseLL(head);
    printLL(head);
    return 0;
}
