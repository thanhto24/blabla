#include <iostream>

using namespace std;
int n,T;
struct Node{
    int data;
    Node *next;
};
typedef struct Node* node;

node makenode(int x)
{
    node tmp = new Node();
    tmp->data = x;
    tmp->next = nullptr;
    return tmp;
}
void insertfirst(node &a, int x)
{
    node tmp=makenode(x);
    if(a==NULL) a=tmp;
    else{
        tmp->next=a;
        a=tmp;
    }
}

void deletepos(node &a, int x)
{
    node trc=NULL, sau= a;
    for(int i=1;i<=n;i++)
    {
        trc=sau;
        if(trc->data==x) {
            cout << i << endl;
            break;
        }
        sau=sau->next;
    }
    if(trc==NULL) a=a->next;
    else trc->next=sau->next;
    cout << a->data;
}
int main()
{
    node head=nullptr;
    cin >> n >> T;
    for(int i=1;i<=n;i++)
    {
        insertfirst(head,i);
    }
    int X;
    while(T--)
    {
        cin >> X;
        deletepos(head,X);
        insertfirst(head,X);
    }
    return 0;
}
