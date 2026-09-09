#include<bits/stdc++.h>
using namespace std;
int main()
{
int a=30;
int *ptr=&a;
int **ptr1=&ptr;
cout<<"Value of a using ptr1:" <<(**ptr1)<<endl;
cout<<"Address of ptr itself:" <<ptr1<<endl;
    return 0;
}