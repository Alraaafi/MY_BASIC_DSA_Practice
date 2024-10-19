#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct node
{
    struct node *lf;
    int data;
    struct node *rt;
} *root = NULL;

void ins(int x)
{
    node *newNode = NULL;
    newNode = new node;
    newNode->data = x;
    newNode->lf = newNode->rt = NULL;

    if(root==NULL)
    {
        root = newNode;
        return;
    }
    else
    {
        node *t = NULL;
        t = root;

        while(t)
        {
            if(x <= t->data)
            {
                if(t->lf==NULL)
                {
                    t->lf = newNode;
                    t = t->lf;
                }
                t = t->lf;
            }
            else
            {
                if(t->rt==NULL)
                {
                    t->rt = newNode;
                    t = t->rt;
                }

                t = t->rt;
            }


        }
        //t = newNode;
    }

}

void dis(node *r)
{
    if(r)
    {
        cout<<r->data<<" ";
        dis(r->lf);
        dis(r->rt);
    }
}

int main()
{
    ins(33);
    ins(20);
    ins(50);

    //cout<<root->lf->data<<endl;

    dis(root);
}

