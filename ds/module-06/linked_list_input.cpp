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

int main()
{
    int n, first_value, last_value;
    cin >> n >> first_value;

    Node *head = new Node(first_value);
    Node *tmp = head;

    for (int i = 1; i < n - 1; i++)
    {
        int x;
        cin >> x;
        tmp->next = new Node(x);
        tmp = tmp->next;
    }

    cin >> last_value;
    tmp->next = new Node(last_value);

    print_linked_list(head);

    return 0;
}