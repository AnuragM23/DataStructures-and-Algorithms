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

int lengthOfTheLinkedList(Node *head)
{
    Node *p = head;
    if (head == NULL)
        return 0;
    int i = 0;
    while (p != NULL)
    {
        p = p->next;
        i++;
    }
    return i;
}

// middleElement
// Brute Force..
int middleElement(Node *head)
{
    Node *p = head;
    int i = 1;
    int position = lengthOfTheLinkedList(head) / 2 + 1;
    while (i < position)
    {
        p = p->next;
        i++;
    }
    return p->data;
}

// Optimised Approach - Tortoise Method;
int middleElementOptimised(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast->next->next != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
}

int main()
{
    Node *head = new Node(1);
    head = InsertionAtTheBeginning(head, 2);
    head = InsertionAtTheBeginning(head, 3);
    head = InsertionAtTheBeginning(head, 4);
    head = InsertionAtTheBeginning(head, 5);
    head = InsertionAtTheBeginning(head, 6);
    // head = InsertionAtTheBeginning(head, 7);
    printLL(head);

    // cout << lengthOfTheLinkedList(head) << endl;
    cout << middleElementOptimised(head) << endl;

    return 0;
}
