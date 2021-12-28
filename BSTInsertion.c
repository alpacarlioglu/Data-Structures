#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *left, *right;
};

struct node *root = NULL;

struct node *newNode(int key)
{
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = key;
    temp -> right = NULL;
    temp -> left = NULL;

    if (root == NULL)
        root = temp;
    return temp;
};

void InOrder(struct node *root)
{
    if(root != NULL)
    {
        InOrder(root -> left);
        printf("%d", root -> data);
        InOrder(root -> right);
    }
}

struct node *ekle(struct node *node, int key)
{
    if(node == NULL)
        return newNode(key);
    if(key < node -> data)
        node -> left = ekle(node -> left, key);
    else if(key > node -> data)
        node -> right = ekle(node -> right, key);
    return node;
};

int main()
{
    return 0;
}