#include <stdio.h>

char *_strdup (const char *str)
{
  char *d = malloc (strlen (str) + 1);
  if (d == NULL)
  {
    return NULL;
  }

  strcpy (d,str);
  return d;
}

int main()
{
    char str [30];
    scanf("%s", &str);
    char *istr;
    istr = _strdup (str);
    printf ("Дубликат: %s\n", istr);
    free (istr);
    return 0;
}
