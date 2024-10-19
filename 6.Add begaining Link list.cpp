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

struct node *insertListAtFirst(struct node *head, int data)
{
    struct node *temp = new struct node[sizeof(struct node)];
    temp->data = data;
    temp->next = head;
    return temp;
}

int main()
{
    struct node *head;
    int arr[5] = {4,6,8,3,7};
    head = ArrayLinkList(arr,5);

    printList(head);

    head = insertListAtFirst(head,77);

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
