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

void check_duplicate(Node *head)
{
    int fre[101] = {0};
    Node *tmp = head;
    while (tmp)
    {
        if (fre[tmp->val])
        {
            cout << "YES";
            return;
        }

        fre[tmp->val]++;
        tmp = tmp->next;
    }

    cout << "NO";
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

    check_duplicate(head);
    return 0;
}