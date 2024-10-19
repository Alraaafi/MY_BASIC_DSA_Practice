#include<bits/stdc++.h>
using namespace std;

#define capacity 3
int que[capacity];
int frnt=0,tail=-1,totalElement=0;

bool isEmpty()
{
    if(totalElement==0)
        return true;
    else return false;
}

bool isFull()
{
    if(capacity==totalElement)
        return true;
    else return false;
}

void enQ(int value1)
{

    if(isFull())
        {
            cout<<"Full Space"<<endl;
            return ;
        }
        else
        {
            tail = (tail + 1)%capacity;
            totalElement++;
            que[tail] = value1;

            //frnt++;
        }
}

int deQ()
{
    if(isEmpty())
    {
        cout<<"Empty  Queue"<<endl;
            return -1;
    }
    else
    {
        int value = que[frnt];
        que[frnt] = 0;
        frnt = (frnt+1)%capacity;
        totalElement--;
        return value;
    }
}

void printQ()
{
    for(int i=0; i<capacity; i++)
    {
        cout<<que[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    enQ(10);
    enQ(20);
    enQ(30);
    enQ(80);
    printQ();

    int a = deQ();
    cout<<a<<endl;

    deQ();
    deQ();
    deQ();
    printQ();
    enQ(50);
    enQ(70);
    printQ();
    cout<<deQ()<<endl;
    printQ();

    //deQ();
}
