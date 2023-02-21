#include "link.h"


void show_var(char *lineptr, struct node *head)
 {
        if (*lineptr == '$') lineptr++;
        char *contactName = lineptr;
        int i = 1;

        struct node *temp = head;
        while (temp != NULL)
        {
            if (strstr(temp->data, contactName))
            {
                printf("$var saved is : %s\n",temp->data);
                printf("saved in the %d th place\n", i);
            }
            temp = temp->nxtpointer;
            i++;
        }
 }

struct node* delete_var(char *lineptr, struct node* head)
{
    struct node *tmp;
    struct node* temp = head; 
    char *j;

    j = get_arg_to_del(lineptr);
    printf("$var to be unset is %s", j);
    if (strstr(head->data, j))
    {
        printf("\nFirst element deleted is : %s\n", temp->data);
        head = temp->nxtpointer; // Advancing the head pointer
        temp->nxtpointer = NULL;
        free(temp); // Node is deleted
    }
    else 
    {   struct node *current = head;
        while(current->nxtpointer != NULL)
        {
            if (strstr(current->nxtpointer->data, j)) 
            {
            tmp = current->nxtpointer;
            current->nxtpointer = current->nxtpointer->nxtpointer;
            printf("\nElement deleted is : %s\n", tmp->data);
            free(tmp);
            break;
            }
            else
                current = current->nxtpointer;
        }
    }
    printf("\nUpdated Linked List is : \n");
    return (head);
}
