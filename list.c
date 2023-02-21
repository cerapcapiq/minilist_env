#include "link.h"


struct node* createList(struct node **head, char *lineptr)
{
  char *nodedata = lineptr;
  struct node *new = malloc(sizeof(struct node));
  new->data = nodedata;
  new->nxtpointer = NULL;

  if (*head == NULL)
    *head = new;
  else
  {
    struct node *last = *head;

    while (last->nxtpointer != NULL)
    {
        last = last->nxtpointer;
    }
   last->nxtpointer = new;  // keep address to link to next node
  }
  return (*head);
}

struct node* display_node(struct node *head)
{
    struct node* temp; 
    temp = head; // temp points to head;
    printf("\n");
    if (temp == NULL)
        printf(" NULL\n\n");
    while (temp != NULL) {
        if (temp->nxtpointer == NULL) {
            printf(" %s->NULL", temp->data);
        }
        else {
            printf(" %s->", temp->data);
        }
        temp = temp->nxtpointer; // Traversing the List till end
    }
    printf("\n\n");
    return head;
}
