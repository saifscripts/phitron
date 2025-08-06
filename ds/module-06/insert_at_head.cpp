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

void insert_at_head(Node *&head, int val)
{
    Node *n = new Node(val);
    n->next = head;
    head = n;
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

    print_list(head);
    insert_at_head(head, 100);
    print_list(head);
    insert_at_head(head, 1);
    insert_at_head(head, 2);
    print_list(head);
    return 0;
}