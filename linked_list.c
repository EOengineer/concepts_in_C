#include <stdio.h>
#include <stdlib.h>



typedef struct node
{
  int val;
  struct node* next;
}
node;





void print_last()
{
  // if list is empty
  if(head == NULL)
  {
    printf("List empty. No last element\n");
  }
  else
  {
    // traversal pointer
    node* crawler = head;

    // until the end of the list
      // remember that the arrow syntax (->next)
      // is a shortcut for dereferencing
      // a pointer to a struct, then accessing
      // its next field. equivalent to the awkward:
      // (*crawler).next.
    while (crawler->next != NULL)
    {
      // keep traversing the list
      crawler = crawler->next
    }
    // print the last integer in the list
    printf("The last integer is %d\n", crawler->val)
  }
}




void insert_after_third(int to_insert)
{
  // if list is empty
  if(head == NULL)
  {
    printf("List empty. No third position exists.\n");
  }
  else
  {
    // traversal pointer
    node* crawler = head;

    // set crawler to the third node in the list
    for (int i = 1; i < 3, i++)
    {
      // if hit the end of list, bail
      if(crawler->next == NULL)
      {
        printf("List is not long enough. No third position exists.\n");
        return;
      }
      // otherwise keep traversing
      else crawler = crawler->next;
    }

    // the insertion : (
    // initialize a new node to go between the two
    node * new_node = malloc(sizeof(node));
    if (new_node == NULL)
    {
      printf("Out of heap memory!\n");
      return;
    }

    // drop in new integer value
    new_node->val = to_insert;

    // first point the new node's "next" field at the third nodes successor
    new_node->next = crawler->next;

    // then point previous node's "next" field at the new node
    crawler->next = new_node;
  }
}
