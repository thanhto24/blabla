#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
};

typedef struct Node *node;

node makeNode(int x)
{
    node tmp = new Node();
    tmp -> data = x;
    tmp -> next = NULL;
    return tmp;
}

int size(node head)
{
    int cnt = 0;
    while(head)
        head = head -> next,
        cnt++;
    return cnt;
}

void printList(node head)
{
    if(!head)
        return void(cout << "Danh sach rong!");
    while(head)
        cout << head -> data << " ",
        head = head -> next;
    return;
}

void pushFront(node &head, int x)
{
    node tmp = makeNode(x);
    tmp -> next = head;
    head = tmp;
    return;
}

void pushBack(node &head, int x)
{
    node tmp = makeNode(x), p = head;
    if(!head)
        return void(pushFront(head,x));
    while(p->next)
        p = p -> next;
    p -> next = tmp;
    return;
}

void pushMiddle(node &head, int x, int pos)
{
    int n = size(head);
    if(pos<1||pos>n+1)
        return void(cout << "Vi tri chen khong hop le!");
    if(pos==1)
        return void(pushFront(head,x));
    if(pos==n+1)
        return void(pushBack(head,x));
    node tmp = makeNode(x), p = head;
    for(int i = 1; i < pos - 1; i++)
        p = p -> next;
    tmp -> next = p ->next;
    p -> next = tmp;
    return;
}

void deleteFirst(node &head)
{
    if(!head)
        return;
    head = head -> next;
    return;
}

void deleteLast(node &head)
{
    if(!head)
        return;
    node frt = NULL, bck = head;
    while(bck->next)
    {
        frt = bck;
        bck = bck -> next;
    }
    if(!frt)
        return void(deleteFirst(head));
    frt -> next = NULL;
    return;
}

void deleteMiddle(node &head, int pos)
{
    if(!head)
        return;
    int n = size(head);
    if(pos<1||pos>n)
        return void(cout << "Vi tri xoa khong hop le!");
    if(pos==1)
        return void(deleteFirst(head));
    if(pos==n)
        return void(deleteLast(head));
    node frt = NULL, bck = head;
    for(int i = 1; i < pos; i++)
    {
        frt = bck;
        bck = bck -> next;
    }
    if(!frt)
        return void(deleteFirst(head));
    frt -> next = bck -> next;
    return;
}

int main()
{
    int n, x;
    node head = NULL;
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> x,
        pushBack(head, x);
    int k; cin >> k;
    deleteMiddle(head, k);
    printList(head);
    return 0;
}