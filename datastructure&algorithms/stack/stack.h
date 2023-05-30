#include "Global.h"
#define LINKED_STACK

#ifdef LINKED_STACK
    typedef struct stackNode{
       StackEntry key;
       struct stackNode* next;
    }StackNode;
    typedef struct stack{
        StackNode *top;

    }Stack;
#else
typedef struct stack
{
    int top;
    StackEntry entry[MAXSTACK];
} Stack;
#endif // LINKED_STACK
void TestImplementation();
void push (StackEntry *,Stack *);
void pop (Stack *);
_Bool stackEmpty (Stack *);
void CreateStack	(Stack *);
void StackTop (StackEntry *, Stack *);
int	StackSize (Stack *);
void ClearStack (Stack *);
void TraverseStack (Stack *, void (*)(StackEntry));



