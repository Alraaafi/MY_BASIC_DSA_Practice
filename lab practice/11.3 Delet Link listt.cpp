#include<bits/stdc++.h>
using namespace std;
int n ;

struct Node
{
    int data;
    Node *next;
} *H = NULL;

struct Node * CrLL( int *A )
{
    Node *t = NULL, *crt = NULL;


    for(int i=0; i<n; i++)
    {
        t = new Node;

        t->data = A[i];
        t->next = NULL;

        if(H==NULL)
        {
            H = t;
            crt = t;
        }
        else
        {
            crt->next = t;
            crt = t;
        }

    }
    return H;
};

void dis(Node *h)
{
    Node *t = h;

    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t = t->next;
    }
    cout<<endl;
}

void dt( int x)
{
    Node *tmp = NULL,*t=NULL,*p=NULL;
    tmp = new Node;
    tmp->next = H;
    p = tmp;

    if(H->data==x)
    {
        t = H;
        H = H->next;
        delete t;
        return ;
    }
    else
    {
        while(p->next != NULL)
        {
            if( p->next->data == x )
            {
                p->next = p->next->next;
                H = tmp->next;
                return;
            }
            else
                p = p->next;
        }
    }
}

int main()
{
    n = 5;
    int A[n] = {10, 20, 30 , 40, 80};

    struct Node *h = NULL;
    h = new Node;

    h = CrLL(A);

    dis(h);

    dt(30);
    dis(H);

    getchar();
}
