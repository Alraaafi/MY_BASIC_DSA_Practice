#include<bits/stdc++.h>
using namespace std;

#define mx 3
int top = 0;
int A[mx];

bool full()
{
    if( top == mx )
        return true;
    else
        return false;
}



bool empy()
{
    if( top == 0 )
        return true;
    else
        return false;
}



void push(int x)
{
    if( full() )
       {
           cout<<"FULL!"<<endl;
            return ;
       }
    A[top] = x;
    top++;
}



int pop()
{
    if(empy())
    {
        cout<<"EMPTY!"<<endl;
        return -1;
    }

    top--;

    int x = A[top];
    A[top] = 0;
    return x;
}

void dis()
{
    for(int i=0; i<top; i++)
        cout<<A[i]<<" ";
    cout<<endl;
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(70);
    dis();
    pop();
    cout<<"value: "<<pop()<<endl;
    dis();
    pop();
    pop();
}
