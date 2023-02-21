#include "link.h"


extern char **environ;

void call_env()
{
  char **s = environ;

  for (; *s; s++) {
    printf("%s\n", *s);
  }

}