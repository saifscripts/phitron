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
    int x;
    cin >> x;

    Node *head = new Node(x);
    Node *tmp = head;
    while (cin >> x)
    {
        if (x < tmp->val)
        {
            cout << "NO";
            return 0;
        }
        tmp->next = new Node(x);
        tmp = tmp->next;
    }

    cout << "YES";
    return 0;
}