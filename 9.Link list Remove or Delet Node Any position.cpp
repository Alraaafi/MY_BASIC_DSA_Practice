#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

struct node *ArrayLinkList(int a[],int sz);

void printList(struct node *head)
{
    struct node *current_node = head;
    while(current_node != NULL)
    {
        cout<<current_node->data << "-> ";
        current_node = current_node->next;
    }
     cout<<endl;
}

struct node *deleteNode(struct node *head, int value )
{
    struct node *dummy_head = (struct node *) malloc(sizeof(struct node));
    dummy_head->next = head;
    struct node *current = dummy_head;
    while( current->next != NULL )
    {
        if(current->next->data == value)
            {
                current->next = current->next->next;
                break;
            }
        else
        {
            current = current->next;
        }
    }
    return dummy_head->next;
}
int main()
{
    struct node *head;
    int arr[5] = {4,6,8,3,7};
    head = ArrayLinkList(arr,5);
    printList(head);

    struct node *newHead = deleteNode(head,7);
    printList(newHead);

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
