char *strcpy(char *dst, const char *src){
  char *d = dst;
  while ( *d++ = *src++ )
    ;
  return dst;
}






#include <stdio.h>

int main()
{
    char* str = "Hello world.";
    char dst[13];
    printf("%s", strcpy(dst, str));

    return 0;
}
