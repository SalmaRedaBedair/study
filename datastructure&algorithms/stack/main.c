#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define LINKED_STACK


int size;
#ifdef LINKED_STACK

StackNode *MakeStackNode(StackEntry item){
    StackNode *p;
    p=(StackNode *)malloc(sizeof item);
    p->next=NULL;
    p->key=item;
    return p;
}

void CreateStack(Stack *ps){
ps->top=NULL;
size=0;
}
StackEntry top(Stack *ps){
  return ps->top->key;
}
void pushStack(StackEntry pe,Stack *ps){
  StackNode *p=MakeStackNode(pe);
  p->next=ps->top;
  ps->top=p;
  size++;
}
void pop(Stack *ps){
    size--;
  StackNode *temp;
  temp=ps->top;
  ps->top=ps->top->next;
  free(temp);
}
_Bool stackEmpty(Stack *ps){
  return (ps->top==NULL);
}
int stackSize(Stack *ps){
 return size;
}
void clearStack(Stack *ps){
    StackNode *temp=ps->top;
    while(temp){
        temp=temp->next;
        free(ps->top);
        ps->top=temp;
    }

  size=0;
}
void display(StackEntry e)
{
    printf("Element  is : %d\n",e);
}
void TraverseStack(Stack *ps, void (*pf)(StackEntry)){
    StackNode *temp=ps->top;
    while(temp){
        (*pf)(temp->key);
        temp=temp->next;
    }
}

#else
void CreateStack(Stack *ps){
ps->top=0;
}
int top(Stack *ps){
  return ps->entry[ps->top-1];
}
void pushStack(int pe,Stack *ps){
  ps->entry[ps->top++]=pe;
}
void pop(Stack *ps){
  ps->top--;
}
_Bool stackEmpty(Stack *ps){
  return (ps->top==0);
}
int stackSize(Stack *ps){
 return ps->top;
}
void clearStack(Stack *ps){
  ps->top=0;
}
void display(int e){
 printf("%d ",e);
}
void traverseStack(Stack *ps,void (*pf)(int)){
    for(int i=ps->top;i>0;i--){
        (*pf)(ps->entry[i-1]);
    }
}

#endif // LINKED_STACK



int main()
{
    Stack st;
    CreateStack(&st);
    StackEntry x;
    scanf("%d",&x);
    pushStack(x,&st);
    //printf("%d\n",top(&st));
    TraverseStack(&st,&display);
    return 0;
}
