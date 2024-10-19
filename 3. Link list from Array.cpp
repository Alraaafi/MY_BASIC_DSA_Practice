#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

//prototype of fun:
struct node *ArrayLinkList(int a[],int sz);

int main()
{
    struct node *head;
    int arr[5] = {4,6,8,3,7};
    head = ArrayLinkList(arr,5);

    while(head != NULL)
    {
        cout<<head->data<<"->";
        head = head->next;
    }
    //cout<<NULL<<endl;
}

struct node *ArrayLinkList(int a[],int sz)
{
    int i,n = sizeof(a)/sizeof(int);
    //cout<<n<<endl;
    struct node *head=NULL;
    struct node *temp=NULL;
    struct node *current=NULL;

    for(i=0; i<sz; i++)
    {
        temp = (struct node *)malloc(sizeof(struct node));
        temp->data = a[i];
        temp->next = NULL;
        if(head==NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current->next = temp;
            current = current->next;
        }
        //cout<<3<<endl;
    }
    return head;
}
