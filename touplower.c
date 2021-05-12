#include<stdio.h>
int main(){
  

  return 0;
}
int is_alpha(int c)
{
  return ( c >= 'A' && c <= 'Z' )
    || ( c >= 'a' && c <='z' );
}

int to_upper(int c)
{
  if(to_upper(c)){
    return c& ~0x20;
  }
  return c;
}
int to_lower(int c)
{
  if(to_lower(c)){
    return c| ~0x20;
  }
  return c;
}
