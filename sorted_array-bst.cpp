#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    Node *left;
    Node *right;
};

Node *addNode(int n)
{
    Node *new_node = new Node();
    new_node->data = n;
    new_node->left = new_node->right = NULL;
    return new_node;
}

Node *arraytobst(vector<int> &arr, int low, int high)
{
    if (low > high)
        return NULL;
    int mid;
    mid = (low + high) / 2;
    Node *temp = addNode(arr[mid]);
    temp->left = arraytobst(arr, low, mid-1);
    temp->right = arraytobst(arr, mid+1, high);
    return temp;
}

int main()
{
    int n,i; // no. of nodes
    cin>>n;
    vector<int> arr(n);
    for(i = 0; i < n; i++)
        cin>>arr[i];
}