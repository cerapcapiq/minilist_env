
#include "link.h"


int main()
{
  char *lineptr;
  struct node *head;
  while (1)
    {
        lineptr = readline("minishell>");
        if (strlen(lineptr)>0) {add_history(lineptr);}
        if (strstr(lineptr, "="))
        {
            get_name(lineptr);
            get_arg(lineptr);
            head = createList(&head, lineptr);
            head = display_node(head);           
        }
        if (strstr(lineptr, "unset"))
        {
            head = delete_var(lineptr, head);
            head = display_node(head);
        } 
        if (strstr(lineptr, "$"))
        {
            show_var(lineptr, head);
        }
        if (strcmp(lineptr, "env") == 0 || strcmp(lineptr, "export") == 0)
        {
            call_env();
            display_node(head);           
        }
        if(!strcmp(lineptr, "exit")) { break; }
	}
}