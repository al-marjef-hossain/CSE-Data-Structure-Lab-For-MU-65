#include<bits/stdc++.h>
using namespace std;
struct student
{
    int id;
    float cgpa;
};
int main()
{
student s1,s2;
cout<<"Input firs student's id, cgpa and input second student's id cgpa"<<endl;
cin>>s1.id>>s1.cgpa>>s2.id>>s2.cgpa;
cout<<"ID: "<<s1.id<<endl<<"CGPA: "<<s1.cgpa<<endl<<"ID: "<<s2.id<<endl<<"CGPA: "<<s2.cgpa<<endl;
    return 0;
}