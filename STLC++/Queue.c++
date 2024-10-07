#include <bits/stdc++.h>
using namespace std;
#define N 100 // Queue-এর সাইজ ১০০ ধরা হলো

int myqueue[N];
int front = -1;
int rear = -1;

void enqueue(int x) // মান ইনসার্ট করা হচ্ছে
{
    if (rear == N - 1)
    {
        cout << "Overflow" << endl;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        myqueue[rear] = x;
    }
    else
    {
        rear++;
        myqueue[rear] = x;
    }
}

void dequeue() // মান রিমুভ করা হচ্ছে
{
    if (front == -1 && rear == -1)
    {
        cout << "Underflow condition" << endl;
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        cout << "Dequeued: " << myqueue[front] << endl;
        front++;
    }
}

void display() // কিউ-এর সব মান প্রদর্শন করা হচ্ছে
{
    if (front == -1 && rear == -1)
    {
        cout << "Queue is empty" << endl;
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            cout << myqueue[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}
