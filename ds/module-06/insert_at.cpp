#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at(Node *&head, int idx, int val)
{
    Node *n = new Node(val);
    Node *temp = head;

    if (idx == 0)
    {
        head = n;
        n->next = temp;
        return;
    }

    for (int i = 1; i < idx && temp->next != NULL; i++)
    {
        temp = temp->next;
    }

    n->next = temp->next;
    temp->next = n;
}

void print_list(Node *head)
{
    Node *temp = head;

    while (temp)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    head->next = a;
    a->next = b;

    // Node *head = NULL;
    print_list(head);
    insert_at(head, 2, 25);
    print_list(head);
    return 0;
}