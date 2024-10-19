//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct Node
{
    Node *prev;
    int data;
    Node *next;
} *first;

void DoublyLLCreateByArray(int A[], int n)
{
    first = new Node;

    Node *t = NULL, *c = NULL;
    t = new Node;

    t->data = A[0];
    t->next = t->prev = NULL;

    first = t;
    c = t;

    for(int i=1; i<n; i++)
    {
        t = new Node;

        t->data = A[i];
        t->next = t->prev = NULL;

        t->prev = c;
        c->next = t;
        c = t;
    }
}

int len(struct Node *hd)
{
    int l = 0;


    while(hd)
    {
        hd = hd->next;
        l++;
    }
    return l;
}

void display(Node *hd)
{
    while(hd)
    {
        cout<< (hd->data) <<" ";
        hd = hd->next;
    }
    cout<<endl;
}

int main()
{

    int sz = 5;
    int A[sz] = {10,20,30,40,50};

    DoublyLLCreateByArray(A, sz);

    cout<<"Size Of LL is: " <<len(first)<<endl;

    display(first);

    cout<<"HEAD IS: " <<first->data <<endl;

    return 0;
}
