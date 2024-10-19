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

struct node *insertNode(struct node *head, int value, int position)
{
    int index = 0;
    struct node *current_Node = head;

    while(current_Node != NULL)
    {
        index++;
        if(index==position)
        {
            struct node *tmp = (struct node*)malloc(sizeof(struct node));
            tmp->data = value;
            tmp->next = current_Node->next;
            current_Node->next = tmp;
        }
        current_Node = current_Node->next;
    }
    return head;
}
int main()
{
    struct node *head;
    int arr[5] = {4,6,8,3,7};
    head = ArrayLinkList(arr,5);
    printList(head);

    head = insertNode(head, 99, 3);
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
