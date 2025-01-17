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

int srcLL(Node *h, int x)
{
    Node *t = h;
    int i = 1;

    while(h!=NULL)
    {
        if(t->data == x)
            return i;
            i++;
        t = t->next;
    }

    return -1;
}

int main()
{
    n = 5;
    int A[n] = {10, 20, 30 , 40, 80};

    struct Node *h = NULL;
    h = new Node;

    h = CrLL(A);

    dis(h);

    int in = srcLL( h, 40 );

    if(in==-1)
        cout<<"NOT Found!!!"<<endl;
    else
        cout<<"Founded. The index is: "<<in<<endl;

    getchar();
}
