#include <bits/stdc++.h>
using namespace std;
struct mesh
{
    int value;
    mesh *next, *previous;
};
struct Doublylinkedlist
{
    mesh *head, *tail;
    Doublylinkedlist()
    {
        head = NULL;
        tail = NULL;
        cout << "Doubly Linked List start from here" << endl<<endl;
    }
    void enqueuetail(int n)
    {
        mesh *current = new mesh;
        current->value = n;
        current->next = NULL;
        current->previous = NULL;
        if (head == NULL && tail == NULL)
        {
            head = tail = current;
            return;
        }
        tail->next = current;
        current->previous = tail;
        tail = current;
    }
    void enqueuehead(int n)
    {
        mesh *current = new mesh;
        current->value = n;
        current->next = NULL;
        current->previous = NULL;
        if (head == NULL && tail == NULL)
        {
            head = tail = current;
            return;
        }
        current->next = head;
        head->previous = current;
        head = current;
    }
    void printforward()
    {
        cout << "Forward list start from here" << endl;
        mesh *current = head;
        if (current == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        while (current != NULL)
        {
            cout << current->value;
            if (current->next != NULL)
            {
                cout << "<->";
            }
            current = current->next;
        }
        cout << endl<<endl;
    }
    void printreverse()
    {
        cout << "Reverce list start from here" << endl;
        mesh *current = tail;
        if (current == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        while (current != NULL)
        {
            cout << current->value;
            if (current->previous != NULL)
            {
                cout << "<->";
            }
            current = current->previous;
        }
    }
};

int main()
{
    Doublylinkedlist d1;
    d1.enqueuetail(10);
    d1.enqueuetail(18);
    d1.enqueuetail(30);
    d1.enqueuehead(32);
    d1.enqueuetail(45);
    d1.enqueuetail(90);
    d1.printforward();
    d1.printreverse();
    return 0;
}