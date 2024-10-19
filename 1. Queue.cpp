#include<iostream>
#include<stdbool.h>
using namespace std;

#define capacity 3
int queue[capacity];
int front=0,tail=-1,totalElement=0;

bool isEmpty()
{
    if(totalElement==0)
        return true;
    else return false;
}

bool isFull()
{
    //cout<<totalElement<<" "<<capacity<<" "<<isFull()<<endl;
    if(totalElement==capacity)
        return true;
    else return false;
}

void enqueue(int n)
{

    if(isFull())
    {
        cout<<"The Item Is Full!"<<endl;

        return;

    }
    tail = (tail+1)%capacity;
    queue[tail] = n;
    totalElement++;
}

int dequeue()
{
    if(isEmpty())
    {
        cout<<"The Item Is Empty!"<<endl;
        return -1;
    }
    int Fvalue = queue[front];
    queue[front] = -1;
    front = (front+1)%capacity;
    totalElement--;
    return Fvalue;
}

void printQ()
{
    printf("PrintQ: ");
    for(int i=0; i<capacity; i++)
    {
        cout<<queue[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    enqueue(8);
    enqueue(4);
    enqueue(6);
    enqueue(3);

    printQ();
    cout<<dequeue()<<endl;
    printQ();
    cout<<dequeue()<<endl;
    cout<<dequeue()<<endl;
    cout<<dequeue()<<endl;

    enqueue(6);
    enqueue(3);
    printQ();

}
