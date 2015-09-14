#include <stdio.h>

typedef struct node
{
  int data;
  struct node* left;
  struct node* right;
}
node;



bool search(node* root, int value)
{
  while (root != NULL)
  {
    if (root->data == value)
      return true;
    else if (value < root->data)
      root = root->left;
    else
      root = root->right;
  }
  // value not found
  return false;
}
