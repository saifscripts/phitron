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

    int size = size_of_linked_list(head);
    cout << size;
    return 0;
}