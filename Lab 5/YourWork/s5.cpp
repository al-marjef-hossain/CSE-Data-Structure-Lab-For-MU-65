#include <bits/stdc++.h>
using namespace std;

struct simple
{
    int value;
    simple *next;
};
struct Queue
{
    simple *front, *rear;
    Queue()
    {
        front = NULL;
        rear = NULL;
        cout << "Linked list initialized start from here" << endl;
    }
    void enqueue(int m)
    {
        simple *current = new simple;
        current->value = m;
        current->next = NULL;
        if (front == NULL && rear == NULL)
        {
            front = rear = current;
            cout << "Enqueued " << m << " to the queue" << endl;
        }
        rear->next = current;
        rear = current;
        cout << "Enqueued " << m << " to the queue" << endl;
    }
};

int main()
{
    Queue q;
    q.enqueue(11);
    q.enqueue(19);
    q.enqueue(31);
    q.enqueue(111);

    return 0;
}