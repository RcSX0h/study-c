#include <stdio.h>
#include <stdlib.h>
// search O(n)
// insert and delete O(1)
typedef struct node node_t;
typedef struct node{
  int value;
  node_t* next;
}node_t;

void print_node(const node_t* head)
{
  const node_t* p;
  p = head;
  while(p !=NULL){
    printf("%d \n",p->value);
    p =p->next;
  }
}

void destroy(node_t* head)
{
  node_t* p =head;
  while(p != NULL){
    node_t* next = p->next;
    free(p);
    p = next;
  }
}
void insert_front(node_t** phead,int n)
{
  node_t* new_node;
  new_node = malloc(sizeof(node_t));
  new_node->value = n;

  new_node->next = *phead;
  *phead = new_node;
}
void insert_sorted(node_t** phead, int n)
{
  node_t** pp;
  node_t* new_node;

  new_node =malloc(sizeof(node_t));
  new_node->value = n;
  pp = phead;

  while(*pp != NULL){ 
    if((*pp)->value >= n){
      break;
    }
  }

  new_node->next = *pp;
  *pp = new_node;
  
}

int main(){
  node_t* head = NULL;
  insert_front(&head,3);
  print_node(head);
  destroy(head);
  head = NULL;
  

return 0;
}
