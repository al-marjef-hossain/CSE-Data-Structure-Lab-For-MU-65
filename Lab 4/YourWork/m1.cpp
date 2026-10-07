#include<bits/stdc++.h>
using namespace std;
struct node
{
    int value;
    node*next, *previous;
};
struct Doublylinkedlist
{
    node *head, *tail;
    Doublylinkedlist()
    {
        head=NULL;
        tail=NULL;
        cout<<"Doubly Linked List start from here"<<endl;
    }
};


int main()
{
Doublylinkedlist d1;
    return 0;
}