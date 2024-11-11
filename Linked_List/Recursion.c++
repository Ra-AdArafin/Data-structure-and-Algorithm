#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

Node *createLinkedList(int a[], int index, int size)
{
    if (index == size)
    {
        return NULL;
    }

    Node *temp = new Node(a[index]);
    temp->next = createLinkedList(a, index + 1, size);
    return temp;
}

void printLinkedList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node *Head = NULL;

    int a[] = {2, 4, 6, 8, 10};
    Head = createLinkedList(a, 0, 5);

    printLinkedList(Head);

    return 0;
}
