#include<iostream>
#include<stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *a=NULL,*b=NULL,*c=NULL;

    //a = (struct Node*)malloc(sizeof(struct Node)); //or
    a = new struct Node[sizeof(struct Node)];
    //int* arr = new int[5];
    b = (struct Node*)malloc(sizeof(struct Node));
    c = (struct Node*)malloc(sizeof(struct Node));

    a->data = 50;
    b->data = 70;
    c->data = 90;

    a->next = c;
    b->next = NULL;
    c->next = b;

    while(a != NULL) //a is head. it is traverse
    {
        cout<<a->data<<"->";
        a = a->next;
    }
}
