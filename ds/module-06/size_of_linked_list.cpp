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

int size_of_list(Node *head)
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
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    int size = size_of_list(head);
    cout << size << endl;
    return 0;
}