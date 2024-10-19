#include<bits/stdc++.h>
using namespace std;

#define capacity 3

int stk[capacity];
int top =-1;

void push(int value1)
{
    if(capacity-1>top)
    {
        top++;
        stk[top] = value1;
    }
    else
    {
        cout<<"Insufficient space"<<endl;
    }
}

int pop()
{
    int value2;
    if(top>=0)
    {
        value2 = stk[top];
        stk[top]=0;
        top--;
        return value2;
    }
    else
    {
        cout<<"Empty Space! for pop"<<endl;
    }

}

int peek()
{
    int value2;
    if(top>=0)
    {
        value2 = stk[top];
        return value2;
    }
    else
    {
        cout<<"Empty Space! for peek"<<endl;
    }
}

void printStack()
{
    for(int i=0; i<capacity; i++)
    {
        cout<<stk[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    push(10);
    push(20);
    printStack();

    int value = pop();
    //pop();
    cout<<value<<endl;
    printStack();
    //pop();
    //cout<<peek()<<endl;
    //peek();



}
