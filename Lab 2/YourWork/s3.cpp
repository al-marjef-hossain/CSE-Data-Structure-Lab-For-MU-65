#include<bits/stdc++.h>
using namespace std;
struct student
{
    int id;
    float cgpa;
};
int main()
{
student arr[3];
arr[0].id= 122;
arr[0].cgpa= 3.55;
arr[1].id= 203;
arr[1].cgpa= 3.8;
arr[2].id= 65;
arr[2].cgpa= 3.83;
for (int i = 0; i < 3; i++)
{
    cout<<"Student "<<i+1<<"Id: "<<arr[i].id<<endl;
    cout<<"Student "<<i+1<<"CGPA: "<<arr[i].cgpa<<endl;
}

    return 0;
}