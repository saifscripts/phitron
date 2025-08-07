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

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}

int size_of_linked_list(Node *head)
{
    int count = 0;
    Node *tmp = head;
    while (tmp)
    {
        count++;
        tmp = tmp->next;
    }

    return count;
}

void print_middle(Node *head)
{
    int size = size_of_linked_list(head);
    int mid = (size - 1) / 2;
    Node *tmp = head;
    for (int i = 0; i < mid; i++)
    {
        tmp = tmp->next;
    }

    cout << tmp->val;

    if (size % 2 == 0)
    {
        cout << " " << tmp->next->val;
    }
}

int main()
{
    int x;
    cin >> x;

    Node *head = new Node(x);
    Node *tmp = head;
    while (cin >> x)
    {
        tmp->next = new Node(x);
        tmp = tmp->next;
    }

    print_middle(head);
    return 0;
}