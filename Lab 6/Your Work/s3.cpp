#include <bits/stdc++.h>
using namespace std;
void selectionsort(int ara[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int minindex=i;
        for (int j = i+1; j< n; j++)
        {
            if(ara[j]<ara[minindex])
            {
                minindex=j;
            }
        }
        if(minindex!=i)
        {
            swap(ara[minindex],ara[i]);
        }
    }
}
void printarray(int ara[],int s)
{
    for (int i = 0; i < s; i++)
    {
       cout<<ara[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int array[n];
    cout<<"Enter "<<n<<" elements"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    cout<<"Unsorted array: ";
    printarray(array,n);
    selectionsort(array,n);
    cout<<"sorter array (Insertion sort):"<<endl;
    printarray(array,n);
    return 0;
}