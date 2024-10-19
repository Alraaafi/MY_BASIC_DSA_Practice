#include<bits/stdc++.h>
using namespace std;

struct Node
{
    Node *prv;
    int data;
    Node *nxt;
};


//ALRAAAFI

void pre(struct Node *n )
{
    //if(n==NULL) return ;
    if( n!=NULL )
    {
        cout<< n->data <<" ";
        pre( n->prv );
        pre( n->nxt );
    }
}

void in( Node *n )
{
    if( n!=NULL )
    {
        in(n->prv);
        cout<<n->data<<" ";
        in(n->nxt);
    }
}

void post( Node *n )
{
    if( n!=NULL )
    {
        post(n->prv);
        post(n->nxt);
        cout<<n->data<<" ";
    }
}


int main()
{

/*
         1
        / \
       3   5
          / \
         2   4
*/

    Node *root = NULL;

    //root = new Node;

    Node *one,*two,*three,*four,*five;

    one= new Node;
    two= new Node;
    three = new Node;
    four = new Node;
    five = new Node;

    one->nxt = NULL;
    two->nxt = NULL;
    three->nxt = NULL;
    four->nxt = NULL;
    five->nxt = NULL;

    one->prv = NULL;
    two->prv = NULL;
    three->prv = NULL;
    four->prv = NULL;
    five->prv = NULL;

    one->data = 1;
    two->data = 2;
    three->data = 3;
    five->data = 5;
    four->data = 4;



    one->prv = three;
    one->nxt = five;
    five->prv = two;
    five->nxt = four;

    root = one;


    cout<<"Pre-Order Travarsal: "; pre(root); cout<<endl;
    cout<<"In-Order Travarsal: "; in(root); cout<<endl;
    cout<<"Post-Order Travarsal: "; post(root); cout<<endl;
}
