// https://www.geeksforgeeks.org/binary-tree-set-1-introduction/

#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

int main()
{
    Node *root = NULL;
    root = new Node();
    root->data = 1;
    root->left = NULL;
    root->right = NULL;

    root->left = new Node();
    root->right = new Node();
    root->left->data = 2;
    root->right->data = 3;
    
    root->left->left = new Node();
    root->left->left->data = 4;
    root->right->right = new Node();
    root->right->right = NULL;
    cout<<root->data<<" "<<root->left->data<<" "<<root->right->data<<" "<<root->left->left->data<<endl;
    return 0;
}