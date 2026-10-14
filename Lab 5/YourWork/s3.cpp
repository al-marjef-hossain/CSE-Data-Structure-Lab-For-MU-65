#include<bits/stdc++.h>
using namespace std;

struct mesh
{
    int value;
    mesh *next;
};
struct Stack
{
    mesh *top;
    Stack()
    {
        top = NULL;
        cout << "Linked list stack initialized from here"<<endl;   
    }
    void push (int n)
    {
        mesh *currentnode = new mesh;
        currentnode->value = n;
        currentnode->next = top;
        top = currentnode;
    }
    int pop()
    {
        if (top==NULL)
        {
            cout << "Stack uderflow!nothing to pop"<<endl;
            return -1;
        }
        mesh *temp = top;
        int popvalue= temp->value;
        top = top->next;
        delete temp;
        return popvalue;mesh *temp = top;
        int popvalue= temp->value;
        top = top->next;
        delete temp;
        return popvalue;
    }
    void printstack()
    {
        if(top==NULL)
        {
            cout << "stack is empty"<<endl;
            return;
        }
        cout << "stack(top to bottom): "<<endl;
        mesh *cur=top;
        while (cur!=NULL)
        {
            cout << cur->value<<endl;
            cur= cur->next;   
        }
    }
};

int main()
{
Stack c;
c.push(10);
c.push(18);
c.push(25);
c.push(37);
cout << "After pus:"<<endl;
c.printstack();
cout << "popped element "<<c.pop()<<endl;
cout << "after poppint:"<<endl;
c.printstack();

    return 0;
}