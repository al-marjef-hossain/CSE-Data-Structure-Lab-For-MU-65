#include<bits/stdc++.h>
using namespace std;
struct address
{
    string city;
    int zipcode;
};
struct student
{
int id;
string name;
address studentaddress;
};
int main()
{
student s1;
s1.id=112;
s1.name="Mubin";
s1.studentaddress.city="Sylhet";
s1.studentaddress.zipcode=3100;
cout<<s1.name<<endl<<"ID:"<<s1.id<<endl<<"Lives in "<<s1.studentaddress.city<<endl<<"Student area zip code:"<<s1.studentaddress.zipcode<<endl;
    return 0;
}
