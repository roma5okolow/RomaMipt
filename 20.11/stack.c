#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int Data;

struct Stack 
    {
    int top; //index of the first empty cell
    int size; 
    Data* a;
    };
    
struct Stack* stack_create(int size);
void stack_push(struct Stack * s, Data x); 
Data stack_pop(struct Stack * s);
Data stack_get(struct Stack * s);
void stack_print(struct Stack * s);
int  stack_size(struct Stack * s);
void stack_clear(struct Stack * s);
void stack_destroy(struct Stack * s);

int main()
    {
    
    struct Stack* stack_t = stack_create(10);
   
    stack_push(stack_t, 55); 
    stack_push(stack_t, 15);
    stack_push(stack_t, 20);
    stack_push(stack_t, 25);
    stack_push(stack_t, 25);
    stack_push(stack_t, 25);
    stack_push(stack_t, 666);
//    stack_pop(stack_t);
    stack_print(stack_t);
    

    stack_clear(stack_t);
    stack_destroy(stack_t);
    }

struct Stack* stack_create(int size)
    {
    
    struct Stack* local;
    local = (struct Stack*) calloc(1, sizeof(struct Stack));
    local->top = 0;
    local->size = size;
    local->a = (Data*) calloc(size, sizeof(Data));

    return(local);
    }

void stack_push(struct Stack * s, Data x)
    {
    if ((s->top) < (s->size))
        {
        s->a[s->top] = x;
        s->top++;
        }
//    else
//        printf("Full Stack");
    } 
    
Data stack_pop(struct Stack * s)
    {
    if (s->top > 0)
        {
        s->top--;
        return(s->a[s->top]);
        }
    }
    

Data stack_get(struct Stack * s)
    {
    if (s->top > 0)
        return(s -> a[s->top - 1]);
    
    }

int stack_is_empty(struct Stack * s)
    {
    
    return(s->top == 0);
    }    

void stack_print(struct Stack * s)
    {
    if(s->top == 0)
        {
        printf("Empty stack");
        return;
        }
        
    int i;
    
    for(i = 0; i < s->top; i++)
        printf("%d ", s->a[i]);
    
    printf("\n");
    }
    
int stack_size(struct Stack * s)
    {
    return(s->top);
    }
    


void stack_clear(struct Stack * s)
    {
    int i;
    
    for(i = 0; i < s->top; i++)
        s->a[i] = 0;
    
    s->top = 0;
    s->size = 0;
    }
    
void stack_destroy(struct Stack * s)
    {
    
    free(s->a);
    s = NULL;
    }
