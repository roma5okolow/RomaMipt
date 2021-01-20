#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 1000

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
    char str [N];
    
    fgets(str, N, stdin);
    
    printf("\n");
    
    puts(str);
    
    int len = strlen(str) ;
    printf("%d\n", len);
    struct Stack* s = stack_create(1);
    
    for(int i = 0; i < len; i++)
    {
        switch(str[i])
        {
            case '(': stack_push(s, str[i]); 
                      break;
            case '[': stack_push(s, str[i]); 
                      break;
            case '<': stack_push(s, str[i]); 
                      break;
            case '{': stack_push(s, str[i]); 
                      break;
            case ')': if(stack_pop(s) != '(')
                          {
                          printf("NO\n");
                          return 0;
                          }
            case ']': if(stack_pop(s) != '[')
                          {
                          printf("NO\n");
                          return 0;
                          }
            case '>': if(stack_pop(s) != '<')
                          {
                          printf("NO\n");
                          return 0;
                          }
            case '}': if(stack_pop(s) != '{')
                          {
                          printf("NO\n");
                          return 0;
                          }
        }
    }

        printf("YES");
    
        stack_destroy(s);
        return 0;
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
        s->a =(Data*) realloc (s->a, s->size);
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
    s->n--;
    Data save = s->a[s->n];
    s->a[s->n] = 0;
    return(save);
}   

Data stack_get(struct Stack * s)
{
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
