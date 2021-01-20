#include <stdio.h>
#include <stdlib.h>

typedef int Data;

struct Stack 
    {
    int top;
    int size;
    Data* a;
    } stack_t;
    
void stack_create(struct Stack * s);
void stack_push(struct Stack * s, Data x); 
Data stack_pop(struct Stack * s);
Data stack_get(struct Stack * s);
void stack_print(struct Stack * s);
int  stack_size(struct Stack * s);
void stack_clear(struct Stack * s);

int main()
    {
    Data a [3] = {1, 1, 6};
    stack_t = {0, 8, a};
    
    stack_create(&stack_t);
    
    }

void stack_create(struct Stack * s)
    {
    int* buf = NULL;
    
    buf = (int*) calloc(stack_t.size, sizeof(int));
    
    int i = 0;
    for(i = stack_t.top; i < stack_t.size; i++)
        buf[i] = 0;
    }

void stack_push(struct Stack * s, Data x);
    {
    stack_t -> a[stack_t.top] = x;
    stack_t -> top += 1;
    } 
    
Data stack_pop(struct Stack * s)
    {
    data save = stack_t -> a[0];
    
    int i;
    for(i = 1; i < top; i++)
        stack_t -> a[i-1] = stack_t -> a[i];
    stack_t -> a[i] = 0;
    
    return save;
    }

Data stack_get(struct Stack * s)
    {
    
    return(stack_t -> a[top - 1];)
    
    }
    
void stack_print(struct Stack * s)
    {
    if(stack_t.top == 0)
        {
        printf("Empty file");
        return;
        }
        
    int i;
    
    for(i = 0; i < stack_t.top; i++)
        printf("%d ", stack_t.a[i];)
    
    printf("\n");
    }
    
int  stack_size(struct Stack * s)
    {
    
    return(stack_t.top)
    
    }
    
int  stack_empty(struct Stack * s)
    {
    
    return(stack_t.top == 0)
    }

void stack_clear(struct Stack * s)
    {
    int i;
    
    for(i = 0; i < stack_t.top; i++)
        stack_t.a[i] = 0;
    }
