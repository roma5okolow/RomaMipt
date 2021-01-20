#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int Data;

struct Stack 
    {
    int n; //index of the first empty cell
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
int stack_is_empty(struct Stack * s);

int main()
{
int x;    
struct Stack * sp = stack_create(3);

stack_push(sp, 5);
stack_push(sp, 19);
stack_push(sp, -2);
stack_print(sp);
// 5 19 -2
printf("n = %d\nsize = %d\n", sp->n, sp->size);
stack_push(sp, 27);
stack_print(sp);
// 5 19 -2 27
printf("is_empty=%d\n", stack_is_empty(sp));
// is_empty=0

x = stack_pop(sp);
printf("x=%d\n", x);
// x=27

x = stack_pop(sp);
printf("x=%d\n", x);
// x=-2

stack_print(sp);
// 5 19

while (!stack_is_empty(sp)) 
{
    stack_pop(sp);
    stack_print(sp);
}
// 5
// Empty stack

stack_destroy(sp);

    }
struct Stack* stack_create(int size)
{
    
    struct Stack* local;
    local = (struct Stack*) calloc(1, sizeof(struct Stack));
    local->n = 0;
    local->size = size;
    local->a = (Data*) calloc(size, sizeof(Data));

    return(local);
}

void stack_push(struct Stack * s, Data x)
{
    if (s->n == s->size)
        {
        s->size++;
        s->a =(Data*) realloc (s->a, s->size + 1);
        s->a[s->n] = x;
        s->n++;
        }
    else
        {
        s->a[s->n] = x;
        s->n++;
        }
} 
    
Data stack_pop(struct Stack * s)
{
    if (s->n > 0)
        {
        s->n--;
        return(s->a[s->n]);
        }
}
    

Data stack_get(struct Stack * s)
{
    if (s->n > 0)
        return(s -> a[s->n - 1]);
    
}

int stack_is_empty(struct Stack * s)
{
    
    return(s->n == 0);
}

void stack_print(struct Stack * s)
{
    if(s->n == 0)
        {
        printf("Empty stack\n");
        return;
        }
        
    int i;
    
    for(i = 0; i < s->n; i++)
        printf("%d ", s->a[i]);
    
    printf("\n");
}

int stack_size(struct Stack * s)
{
    return(s->n);
}



void stack_clear(struct Stack * s)
{
    int i;
    
    for(i = 0; i < s->n; i++)
        s->a[i] = 0;
    
    s->n = 0;
    s->size = 0;
}

void stack_destroy(struct Stack * s)
{
    
    free(s->a);
    free(s);
}
