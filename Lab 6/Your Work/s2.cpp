#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the size of the array: ";
    int l;
    cin >> l;
    int n[l];
    for (int i = 0; i < l; i++)
    {
        cin >> n[i];
    }
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < l - i - 1; j++)
        {
            if (n[j] > n[j + 1])
            {
                swap(n[j], n[j + 1]);
            }
        }
    }
    cout<<"After the bubble sort"<<endl;
    for (int i = 0; i < l; i++)
    {
        cout<<n[i]<<" ";
    }
    cout<<endl;
    return 0;
}