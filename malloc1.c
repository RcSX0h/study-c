// 동적 메모리 할당시 문제 
// 메모리 연산을 잘못할경우 메모리 누수가 발생할수있다.
// int* nums;
// nums = malloc(LENGTH * sizeof(int));

// for(int i = 0;i < LENGTH;++i){
//   *nums++ = 10 * (i+1);
// }

// free(nums);
//할당 받은 포인터로 연산 금지!
#include<stdio.h>
#include<stdlib.h>
#define LENGTH 10
int main(){
  void* nums;
  int* p;
  size_t i;

  nums =malloc(LENGTH*sizeof(int));
  p = nums;

  for(i = 0;i<LENGTH;++i)
  {
    *p++ = 10 * (i+1);
  }

  free(nums);
  nums = NULL; //해제후 널포인터를 대입 ! 
  //free(nums)  해제한 메모리를 다시 해제해도 문제가 발생 !

  

  return 0;
}
