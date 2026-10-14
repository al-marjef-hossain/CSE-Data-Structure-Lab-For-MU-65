#include <bits/stdc++.h>
using namespace std;

struct mstruct
{
    int value;
    mstruct *next;
};
struct Stuck
{
    mstruct *top;
    Stuck()
    {
        top = NULL;
        cout << "Linked List Stuck initialized" << endl;
    }
    bool isempty()
    {
        return top == NULL;
    }
};

int main()
{
    Stuck s;
    if (s.isempty())
    {
        cout << "the stuck is empty" << endl;
    }
    return 0;
}