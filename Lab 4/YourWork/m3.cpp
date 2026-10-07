#include <bits/stdc++.h>
using namespace std;
struct datastruct
{
    int value;
    datastruct *next, *previous;
};
struct Doublylinkedlist
{
    datastruct *head, *tail;
    Doublylinkedlist()
    {
        head = NULL;
        tail = NULL;
        cout << "Doubly Linked List start from here" << endl
             << endl;
    }
    void enqueue(int c)
    {
        datastruct *current = new datastruct;
        current->value = c;
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

    void printforward()
    {
        cout << "Forward list start from here" << endl;
        datastruct *current = head;
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
        cout << endl
             << endl;
    }
    void printreverse()
    {
        cout << "Reverce list start from here" << endl;
        datastruct *current = tail;
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
    void insertafterhead(int n)
    {
        if (head == NULL)
        {
            enqueue(n);
            return;
        }
        datastruct *current = new datastruct;
        current->value = n;
        current->next = head->next;
        current->previous = head;
        if (head->next != NULL)
        {
            head->next->previous= current;
        }
        else
        {
            tail = current;
        }
        head->next = current;
    }
    void insertbeforetail(int n)
    {
        if (tail == NULL || head == tail)
        {
            datastruct *current = new datastruct;
            current->value = n;
            current->next = head;
            current->previous = NULL;
            if (head != NULL)
            {
                head->previous = current;
            }
            head = current;
            if (tail == NULL)
            {
                tail = current;
                return;
            }
        }
        datastruct *current = new datastruct;
        current->value = n;
        current->next = tail;
        current->previous = tail->previous;
    }
    void insertaftervalue(int tofind, int toadd)
    {
        datastruct *current = head;
        while (current != NULL && current->value != tofind)
        {
            current = current->next;
        }
        if (current != NULL)
        {
            datastruct *newnode = new datastruct;
            newnode->value = toadd;
            newnode->next = current->next;
            newnode->previous = current;
            if (current->next != NULL)
            {
                current->next->previous = newnode;
            }
            else
            {
                tail = newnode;
            }
            current ->next = newnode;
        }
        else
        {
            cout << "Value: " << tofind << "not found "<< endl;
        }
    }
};

int main()
{
    Doublylinkedlist d1;
    d1.enqueue(10);
    d1.enqueue(18);
    d1.enqueue(30);
    d1.enqueue(32);
    cout <<endl<< "After enqueue: " << endl;
    d1.printforward();

    d1.insertafterhead(16);
    d1.insertafterhead(20);
    d1.insertafterhead(31);
    cout<<endl<<"After inserthead(16,20,31): "<<endl;
    d1.printforward();

    d1.insertbeforetail(35);
    d1.insertbeforetail(40);
    d1.insertbeforetail(41);
    cout<<endl<<"After inserttail(35,40,41): "<<endl;
    d1.printforward();

    d1.insertaftervalue(16,25);
    cout<<endl<<"After insertAftervalue(16,25):"<<endl;
    d1.printforward();
    d1.printreverse();
    return 0;
}