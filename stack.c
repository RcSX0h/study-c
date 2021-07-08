#ifndef ASSERT_H
#define ASSERT_H
#include<assert.h>
#include <stdlib.h>
#endif

enum { MAX_NUMS = 8 };
enum {TRUE = 1, FALSE =0};


int s_nums[MAX_NUMS];
size_t s_num_count = 0;

int is_empty(void)
{
  return (s_num_count == 0);
}
void push (int n)
{
  assert(s_num_count < MAX_NUMS);
  s_nums[s_num_count++] = n;
}
int pop(void){
  assert(is_empty() == FALSE);

  return s_nums[--s_num_count];
}

int main(){
  push(88);
  push(44);
  push(22);

  return 0;
}
