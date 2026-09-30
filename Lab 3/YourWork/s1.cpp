#include <bits/stdc++.h>
using namespace std;
struct node{
    int value;
    node *next;
};
struct singlylinkedlist
{
    node *head, *tail;
    singlylinkedlist()
    {
        head=NULL;
        tail=NULL;
        cout<<"Singly Linked List initialized!"<<endl;
    }
};

int main() {
    singlylinkedlist s1;
    return 0;
}