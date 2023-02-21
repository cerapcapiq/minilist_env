#ifndef LINK_H
# define LINK_H

#include <stdlib.h>
#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
#include <unistd.h>
#include <string.h>



struct node
{
  char *data;
  struct node *nxtpointer;
}*head;


void searchList();
struct node* delete_var(char *lineptr, struct node* head);
void show_var(char *lineptr, struct node *head);
void call_env();

//void createList(struct node **node, char *lineptr);
struct node* display_node(struct node *head);
struct node* createList(struct node **head, char *lineptr);

char *get_name(char *linestr);
void get_arg(char *lineptr);
char * get_arg_to_del(char *lineptr);

#endif