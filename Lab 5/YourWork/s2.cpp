#include<bits/stdc++.h>
using namespace std;

struct mesh
{
    int value;
    mesh *next;

};

struct Stuck
{
    mesh *top;
    Stuck()
    {
        top=NULL;
        cout << "Linked list Stuck initialized"<<endl;
        
    }
    void push(int n)
    {
        mesh *newnode=new mesh;
        newnode->value=n;
        newnode->next=top;
        top=newnode;
        cout << "pushed here "<<n<<" onto the stuck"<<endl;
        
    }
};

int main()
{
Stuck m;
m.push(9);
m.push(12);
m.push(20);
m.push(26);

    return 0;
}