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

void inB( Node *h, int x )
{
    Node *t = NULL;
    t= new Node;

    t->data = x;
    t->next = NULL;
    if(H==NULL)
    {
        H = t;
    }
    else
    {
        t->next = H;
        H = t;
    }
}

void inE( Node *h, int x )
{
    Node *t = NULL;
    t= new Node;

    t->data = x;
    t->next = NULL;
    if(H==NULL)
    {
        H = t;
    }
    else
    {
        Node *p = h;
        while(p->next!=NULL)
            p = p->next;

        p->next = t;
    }
}

void inst( Node *h,int in, int x )
{
    Node *t = NULL;
    t= new Node;
    int i = 0;

    t->data = x;
    t->next = NULL;


    if(H==NULL)
    {
        H = t;
    }
    else
    {
        Node *p = h;
        while(p!=NULL)
        {
             i++;
             if(in==i)
             {
                 t->next = p->next;
                 p->next = t;
             }

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


    inB(H,77);
    inE(H,55);
    dis(H);

    inst(H,3,69);
    dis(H);



    getchar();
}
