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

struct node *reverseList(struct node *head)
{
    struct node *current=head, *prev=NULL, *next=NULL;
    while(current != NULL)
    {
        next = current->next;
        current->next = prev;

        prev = current;
        current = next;
    }
    head = prev;
    return head;

}

int main()
{
    struct node *head;
    int arr[5] = {4,6,8,3,7};
    head = ArrayLinkList(arr,5);

    head = reverseList(head);
    while(head != NULL)
    {
        cout<<head->data<<"->";
        head = head->next;
    }
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
