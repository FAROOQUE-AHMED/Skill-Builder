#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *pre;
    Node(int val)
    {
        data = val;
        next = pre = NULL;
    }
};

class doublyList
{
    Node *head;
    Node *tail;

public:
    doublyList()
    {
        head = tail = NULL;
    }
    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            head->pre = newNode;
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->pre = tail;
            tail = newNode;
        }
    }
    void pop_front()
    {
        if (head != NULL)
        {
            Node *temp = head;
            head = head->next;
            head->pre = NULL;
            temp->next = NULL;
            delete temp;
        }
    }
    void pop_back()
    {
        if (tail != NULL)
        {
            Node *temp = tail;
            tail = tail->pre;
            tail->next = NULL;
            temp->pre = NULL;
            delete temp;
        }
    }

    void printll()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " <=> ";
            temp = temp->next;
        }
        cout << "NULL";
    }
};

int main()
{
    doublyList dll;
    dll.push_front(5);
    dll.push_front(4);
    dll.push_front(3);
    dll.push_front(2);
    dll.push_front(1);
    dll.push_front(0);
    dll.push_back(6);
    dll.pop_front();
    dll.pop_back();
    dll.printll();

    return 0;
}
