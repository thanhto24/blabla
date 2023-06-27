#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

typedef struct Node *node;

node makeNode(int x)
{
    node tmp = new Node();
    tmp->data = x;
    tmp->next = NULL;
    return tmp;
}

void printList(node head)
{
    if (!head)
        return void(cout << "Danh sach rong!");
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
    return;
}

void pushFront(node &head, int x)
{
    node tmp = makeNode(x);
    tmp->next = head;
    head = tmp;
    return;
}

void pushBack(node &head, int x)
{
    node tmp = makeNode(x);
    if (!head)
        return void(pushFront(head, x));
    node p = head;
    while (p->next)
        p = p->next;
    p->next = tmp;
    return;
}

int size(node head)
{
    int cnt = 0;
    while (head)
    {
        head = head->next;
        cnt++;
    }
    return cnt;
}

void pushMiddle(node &head, int x, int pos)
{
    int n = size(head);
    if (pos < 1 || pos > n + 1)
        return void(cout << "Vi tri chen khong hop le!");
    if (pos == 1)
        return void(pushFront(head, x));
    if (pos == n + 1)
        return void(pushBack(head, x));
    node p = head, tmp = makeNode(x);
    for (int i = 1; i < pos - 1; i++)
        p = p->next;
    tmp->next = p->next;
    p->next = tmp;
    return;
}

void deleteFirst(node &head)
{
    if (!head)
        return;
    head = head->next;
    return;
}

void deleteLast(node &head)
{
    if (!head)
        return;
    node truoc = NULL, sau = head;
    while (sau->next)
    {
        truoc = sau;
        sau = sau->next;
    }
    if (!truoc)
        return void(deleteFirst(head));
    truoc->next = NULL;
    return;
}

void deleteMiddle(node &head, int pos)
{
    int n = size(head);
    if (pos < 1 || pos > n)
        return void(cout << "Vi tri can xoa khong hop le!");
    node truoc = NULL, sau = head;
    for (int i = 1; i < pos; i++)
    {
        truoc = sau;
        sau = sau->next;
    }
    if (!truoc)
        return void(deleteFirst(head));
    truoc->next = sau->next;
    return;
}

void sort(node &head)
{
    for (node i = head; i->next; i = i->next)
    {
        for (node j = i->next; j; j = j->next)
        {
            if (i->data > j->data)
            {
                int tmp;
                tmp = i->data;
                i->data = j->data;
                j->data = tmp;
            }
        }
    }
    return;
}
int main()
{
    node head = NULL;
    int n, x;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> x,
            pushBack(head, x);
    pushMiddle(head, -1, 3);
    sort(head);
    printList(head);
    return 0;
}