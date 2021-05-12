int compare_string(const char* str0,const char* str1)
{
  while(*str0 != '\0' && *str0==*str1){
    ++str0;
    ++str1;
  }

  return *str0 - *str1;

}
int compare_string1(const char* str0,const char* str1)
{
  if(*str0 == *str1){
    return 0;
  }

  return *str0 >  *str1 ? 1 : -1;
}
