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

int main()
{
    Node *head = new Node(10);
    head->next = new Node(200);
    head->next->next = new Node(300);

    Node *temp = head;
    while (temp)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }

    temp = head;
    while (temp)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }

    return 0;
}