#include<iostream>
using namespace std;

#define capacity 3
int stack[capacity];
int top = -1;

void push(int n)
{
    if(capacity-1>top)
    {
        top++;
        stack[top]=n;
        cout<<"Value Sucsessfully Added"<<endl;
    }
    else
    {
        cout<<"Error! No Space."<<endl;
    }
}

int pop()
{
    if(top>=0)
    {
        int pop_val = stack[top];
        top--;
        return pop_val;
    }
    else
        cout<<"Stack Is Empty"<<endl;
}

int peek()
{
    if(top>=0)
        return stack[top];
    else
        cout<<"No PEEK Exist!"<<endl;
}

int main()
{
    peek();
    push(54);
    push(35);
    cout<<peek()<<endl;
    pop();
    cout<<pop()<<endl;
    cout<<pop()<<endl;
    push(57);
    push(357);
    push(64);
    push(67);



    //push(46);

    //push(24);
    //push(95);
}
