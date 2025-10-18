#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class circularList
{

    Node *head;
    Node *tail;

public:
    circularList()
    {
        head = tail = NULL;
    }

    void deleteAtHead()
    {
        if (head == NULL)
        {
            cout << "list is empty";
            return;
        }
        else if (head == tail)
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            tail->next = head;
        }
        else
        {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }
    void print()
    {
        if (head == NULL)
        {
            cout << "invalid" << endl;
            return;
        }

        Node *temp = head;
        cout << temp->data << " -> ";
        temp = temp->next;
        while (temp != head)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << head->data << endl;
        return;
    }
};
int main()
{

    circularList cll;
    cll.push_front(5);
    cll.push_front(4);
    cll.push_front(3);
    cll.push_front(2);
    cll.push_front(1);
    cll.push_front(0);
    // cll.deleteAtHead();
    // cll.deleteAtHead();

    cll.print();

    return 0;
}