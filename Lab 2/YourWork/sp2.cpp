#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node*next;
};
int main()
{
node n1,n2;
cin>>n1.data>>n2.data;
n1.next=&n2;
cout<<n1.data+1<<endl<<"Accessing n2's data through n1: "<<n1.next->data<<endl;
    return 0;
}