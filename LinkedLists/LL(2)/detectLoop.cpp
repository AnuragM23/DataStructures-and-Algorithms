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

void createLoop(Node *&head)
{
    Node *p;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = head->next->next;
}

// Optimised Approach - Tortoise Solution
bool LoopDetection(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
            return true;
    }
    return false;
}

int main()
{
    Node *head = new Node(1);
    head = InsertionAtTheBeginning(head, 2);
    head = InsertionAtTheBeginning(head, 3);
    head = InsertionAtTheBeginning(head, 4);
    head = InsertionAtTheBeginning(head, 5);
    head = InsertionAtTheBeginning(head, 6);

    createLoop(head);

    cout << LoopDetection(head) << endl;

    return 0;
}
