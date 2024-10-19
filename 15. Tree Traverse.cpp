#include<iostream>
using namespace std;

typedef struct node Node;
struct node
{
    int data;
    Node *left;
    Node *right;
};

Node *create_tree();
void add_right_tree(Node *subRoot, Node *current_root);
void add_left_tree(Node *subRoot, Node *current_root);
Node *create_node(int item);

void pre_order_traverse(Node *node)
{
    cout<< node->data <<" ";
    if(node->left != NULL)
        pre_order_traverse(node->left);
    if(node->right != NULL)
     pre_order_traverse(node->right);
}

void in_order_traverse(Node *node)
{

    if(node->left != NULL)
        in_order_traverse(node->left);

        cout<< node->data <<" ";

    if(node->right != NULL)
     in_order_traverse(node->right);
}

void post_order_traverse(Node *node)
{
    if(node->left != NULL)
        post_order_traverse(node->left);
    if(node->right != NULL)
        post_order_traverse(node->right);

     cout<< node->data <<" ";
}

int main()
{
    Node *root = create_tree();
    //cout<<root->data<<endl;
    cout<<"pre: "; pre_order_traverse(root); cout<<endl;
    cout<<"in: "; in_order_traverse(root); cout<<endl;
    cout<<"post: "; post_order_traverse(root); cout<<endl;
}



Node *create_node(int item)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = item;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void add_left_tree(Node *subRoot, Node *current_root)
{
    subRoot->left = current_root;
}

void add_right_tree(Node *subRoot, Node *current_root)
{
    subRoot->right = current_root;
}

Node *create_tree()
{
    Node *two = create_node(2);
    Node *seven = create_node(7);
    Node *nine = create_node(9);
    add_left_tree(two,seven);
    add_right_tree(two,nine);

    Node *one = create_node(1);
    Node *six = create_node(6);
    add_left_tree(seven,one);
    add_right_tree(seven,six);

    Node *five = create_node(5);
    Node *ten = create_node(10);
    add_left_tree(six,five);
    add_right_tree(six,ten);

    //...
    Node *eight = create_node(8);
    add_right_tree(nine,eight);

    Node *three = create_node(3);
    Node *four = create_node(4);
    add_left_tree(eight,three);
    add_right_tree(eight,four);

    return two;

}

