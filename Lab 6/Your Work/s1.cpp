#include <bits/stdc++.h>
using namespace std;
void insertionsort(int ara[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int k = ara[i];
        int j = i - 1;
        while (j >= 0 && ara[j] > k)
        {
            ara[j + 1] = ara[j];
            j = j - 1;
        }
        ara[j + 1] = k;
    }
}
void printarray(int ara[],int size)
{
    for (int i = 0; i < size; i++)
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
    insertionsort(array,n);
    cout<<"sorter array (Insertion sort):"<<endl;
    printarray(array,n);
    return 0;
}