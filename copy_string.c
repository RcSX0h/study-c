#include<stdio.h>
void copy_string(char* dest, const char* src)
{
  while(*src != '\0')
  {
    *dest++ = *src++;
    printf("%p\n",dest);
  }

    printf("%p\n",dest);
  *dest = '\0';
}
