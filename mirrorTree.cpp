#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
typedef struct node
{
    int data;
    struct node* left;
    struct node* right;
} st;
st *root=NULL;
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct node* getnode(int data)

{
  struct node* node = (struct node*)
                       malloc(sizeof(struct node));
  node->data = data;
  node->left = NULL;
  node->right = NULL;

  return(node);
}
void insert(int data)
{
    int i,j,n;
    st *tmp,*store;
    tmp=root;
    if(tmp==NULL)
    {
        root=getnode(data);
        return;
    }
    while(tmp!=NULL)
    {
        store=tmp;
        if(tmp->data<data)
            tmp=tmp->right;
        else
            tmp=tmp->left;
    }
    if(data>store->data)
        store->right=getnode(data);
    else
        store->left=getnode(data);
}
st* mirror(st *tmp,st *store)
{
    st *v;
    store=tmp;
    if(tmp->left==NULL)
        return store;
    mirror(tmp->left,store);
    if(store!=root)
    {
        v=store->right;
        store->right=store->left;
        store->left=v;
    }

}
int main()
{
    int i,j,k,l,n;
    st *check,*t;
    insert(5);
    insert(7);
    insert(3);
    insert(2);
    insert(4);
    insert(9);
    insert(6);
    mirror(root->right,check);
    mirror(root->left,check);
    cout<<root->right->right->data;
   // cout<<root->left->right->data;
}
