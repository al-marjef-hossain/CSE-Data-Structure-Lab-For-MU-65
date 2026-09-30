#include <bits/stdc++.h>
using namespace std;

struct node
{
    int val;
    node *next;
};
struct singlylinkedlist
{
    node *head, *tail;
    singlylinkedlist()
    {
        head = NULL;
        tail = NULL;
        cout << "singly linked list start from here" << endl;
    }
    void enqueue(int a)
    {
        node *cur = new node;
        cur->val = a;
        cur->next = NULL;
        if (head == NULL && tail == NULL)
        {
            head = tail = cur;
            return;
        }
        tail->next = cur;
        tail = cur;
    }
    void printlist()
    {
        cout << "--------------" << endl;
        node *cur = head;
        if (cur == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        while (cur != NULL)
        {
            cout << cur->val << endl;
            cur = cur->next;
        }
    }
    void inserafterhead(int a)
    {
        if (head == NULL)
        {
            enqueue(a);
            return;
        }
        node *cur = new node;
        cur->val = a;
        cur->next = head->next;
        head->next = cur;
        if (head == tail)
        {
            tail = cur;
        }
    }
    void insertbefortail(int a)
    {
        if (head == NULL || tail == NULL)
        {
            node *cur = new node;
            cur->val = a;
            cur->next = head;
            head = cur;
            if (tail == NULL)
            {
                tail = cur;
                return;
            }
        }
            node *prev = head;
            while (prev->next != tail)
            {
                prev = prev->next;
            }
            node *cur = new node;
            cur->val = a;
            cur->next = tail;
            prev->next = cur;
        
    }
    void insertafterval(int tofind, int toadd)
    {
        node *cur = head;
        while (cur != NULL && cur->val != tofind)
        {
            cur = cur->next;
        }
        if (cur != NULL)
        {
            node *newnode = new node;
            newnode->val = toadd;
            newnode->next = cur->next;
            cur->next = newnode;
            if (cur == tail)
            {
                tail == newnode;
            }
        }
        else
        {
            cout << "Value " << tofind << "not found!" << endl;
        }
    }
};

int main()
{
    singlylinkedlist s1;
    s1.enqueue(10);
    s1.enqueue(15);
    s1.enqueue(22);
cout<<"After enqueue: "<<endl;
s1.printlist();
s1.inserafterhead(18);
cout<<"After inserafterhead(18): ";
s1.printlist();
s1.insertbefortail(25);
cout<<"insertbeforetail(25): ";
s1.printlist();
s1.insertafterval(16,17);
cout<<"After inserafterval(16,17): ";
s1.printlist();
    return 0;
}