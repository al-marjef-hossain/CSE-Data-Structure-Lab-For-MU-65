#include <bits/stdc++.h>
using namespace std;

struct mesh
{
    int val;
    mesh *next;
};

struct singlylinkedlist
{
    mesh *head, *tail;
    singlylinkedlist()
    {
        head = NULL;
        tail = NULL;
        cout << "A singly linked list start from here" << endl;
    }

    void enqueue(int x)
    {
        mesh *current = new mesh;
        current->val = x;
        current->next = NULL;
        if (head == NULL && tail == NULL)
        {
            head = tail = current;
            return;
        }
        tail->next = current;
        tail = current;
    }
    void printlist()
    {
        cout << "---------------------" << endl
             << "The linked is: " << endl;
        mesh *current = head;
        if (current == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }
        while (current != NULL)
        {
            cout << current->val << endl;
            current = current->next;
        }
    }
};

int main()
{
    singlylinkedlist s1;
    s1.printlist();
    s1.enqueue(10);
    s1.enqueue(15);
    s1.printlist();
    s1.enqueue(-19);
    s1.enqueue(-22);
    s1.printlist();
    singlylinkedlist s2;
    s2.enqueue(102);
    s2.enqueue(105);
    s2.printlist();
    return 0;
}