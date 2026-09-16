#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
};
int main()
{
node n1;
cin>>n1.data;
node*ptr= &n1;
cout<<ptr<<endl<<(*ptr).data<<endl;
    return 0;
}