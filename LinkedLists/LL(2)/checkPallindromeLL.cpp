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

// Brute Force Approach 
/* Put all Elements of the LinkedList in a Vector.
   Then, check whether the vector is Pallindrome or not. 
*/

// Optimised Approach
Node* middleNode(Node *head) {

    Node *fast = head;
    Node *slow = head;

    while (fast->next != NULL && fast->next->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
 
Node* reverseList(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *newhead = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}

bool isPalindrome(Node *head)
{
    if(head==NULL||head->next==NULL) return true;
        
    Node *mid = middleNode(head); // found the middle node of the LL.
    Node *check1 = head; 
    Node *check2 = reverseList(mid->next); // reversing the rest of the list.

    /*
        check1 pointer checks from the first node.
        check2 pointer checks with next node of the middle node.
    */

    while(check2 != NULL){
        if(check1->data != check2->data) return false;

        check1 = check1->next;
        check2 = check2->next;
    }
    return true;
}

int main()
{
    Node *head = new Node(1);
    head = InsertionAtTheBeginning(head, 2);
    head = InsertionAtTheBeginning(head, 3);
    head = InsertionAtTheBeginning(head, 3);
    head = InsertionAtTheBeginning(head, 5);
    head = InsertionAtTheBeginning(head, 1);
    printLL(head);
    cout << isPalindrome(head) << endl;
    return 0;
}
