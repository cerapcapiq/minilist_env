#include "link.h"
#define j 2048

char* ft_substr(const char *src, int m, int n)
{
    int len = n - m;
    char *dest = (char*)malloc(sizeof(char) * (len + 1));
 
    for (int i = m; i < n && (*(src + i) != '\0'); i++)
    {
        *dest = *(src + i);
        dest++;
    }
    *dest = '\0';
    return dest - len;
}

char *get_name(char *linestr)
{
    char *str = linestr;
    char *cpy;

    printf("%s\n", str);
    int i = 0;
    while (str[i] != '=')
        i++;
    cpy = ft_substr(str, 0, i);
    printf ("the $var is %s\n", cpy); 
    return (cpy);

}

void get_arg(char *lineptr)
{ 
    char *str = lineptr;
    char *arg = str;
    char after[j];

    if ((arg = strchr(str, '='))) 
    {
        size_t len = strlen (++arg);
        if (len > j - 1) 
        {
            printf("error");
        } 
        memcpy (after, arg, len + 1);
        printf ("the arg(value) is %s\n", arg);    
    }
}

char * get_arg_to_del(char *lineptr)
{ 
    char *str = lineptr;
    char *arg = str;
    char after[j];

    if ((arg = strchr(str, ' '))) 
    {
        size_t len = strlen (++arg);
        if (len > j - 1) 
        {
            printf("error");
        } 
        memcpy (after, arg, len + 1);  
        
    }
    return (arg);
}