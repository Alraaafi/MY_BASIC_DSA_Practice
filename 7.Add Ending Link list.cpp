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

struct node *insertListAtLast(struct node *head, int data)
{
    struct node *current = head;
    while(current->next != NULL)
    {
        current = current->next;
        //cout<<current->data<<endl;
    }
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    current->next = newNode;
    return head;
}

int main()
{
    struct node *head;
    int arr[5] = {4,6,8,3,7};
    head = ArrayLinkList(arr,5);

    printList(head);

    head = insertListAtLast(head,98);

    printList(head);

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
