#include <bits/stdc++.h>
using namespace std;

struct simple
{
    int value;
    simple *next;
};
struct Queue
{
    simple *front;
    simple *rear;
    Queue()
    {
        front = NULL;
        rear = NULL;
        cout << "Linked list queue initialized start from here" << endl;
    }
    bool isempty()
    {
        return front == NULL;
    }
};

int main()
{
    Queue u;
    if (u.isempty())
    {
        cout << "The queue is currently empty" << endl;
    }
    return 0;
}