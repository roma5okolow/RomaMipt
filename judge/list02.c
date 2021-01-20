#include<stdio.h>
#include<stdlib.h>

typedef int Data;

struct Node
    {
    Data val;
    struct Node *next;
    };
    
struct Node * list_create ();
void list_print (struct Node * list);
struct Node * list_push (struct Node * list, Data x);
Data list_get(struct Node * list);
int list_size(struct Node * list);
struct Node * list_pop (struct Node * plist, Data * px);
int list_is_empty(struct Node * list);
struct Node * list_clear(struct Node * list);
    
int main()
{
    Data x;
    struct Node * list = list_create();
    list = list_push(list, 5);
    list_print(list);          // 5
//    list = list_pop(list, &x);
//    printf("x = %d\n", x);     // x = 5
//   list = list_clear(list); 
    
    return 0;
}
    
struct Node * list_create ()
{
    
    struct Node* head = NULL, *current, *prev;
        
    head = (struct Node*) malloc(sizeof(struct Node));

    head -> next = NULL;
    
    return head;
}

struct Node * list_push (struct Node * list, Data x)
{
    struct Node *current, *p;
    
    current = (struct Node*) malloc(sizeof(struct Node));
    
    p = list->next;
    
    if(p == NULL)
    {
        list->val = x;
        list->next = current;
    }
    
    else
    {
        while(p->next != NULL)
            p = p->next;
    
        p->next = current;
    
        current->val = x;
    }
    
    return current;
    
}
   
void list_print (struct Node * list)
{
    struct Node *current = list;
    
    if(list->next == NULL)
        {
        printf("%d\n", list->val);
        return;
        }
    
    while(current->next != NULL)
        {
        printf("%d ", current -> val);
        current = current -> next;
        }
    printf("\n");
    return;
}

struct Node * list_pop (struct Node * plist, Data * px)
{
    struct Node *p, *prev;
    
    prev = plist;
    p = plist->next;
    
    while(p->next != NULL)
    {
        prev = p;
        p = p->next;
    }
    
    px = &(p->val);
    p->val = 0;
    prev->next = NULL;
    free(p);
    
    return prev;
}

Data list_get(struct Node * list)
{
    struct Node *p;
    
    p = list;
    
    while(p->next != NULL)
        p = p->next;
    
    return(p->val);
}

int list_size(struct Node * list)
{
    struct Node *p;
    
    p = list;
    
    if(p = NULL)
        return 0;
    
    else
    {
        int i = 1;
        while(p->next != NULL)
        {
            p = p->next;
            i++;
        }
        return i;
    }
}

int list_is_empty(struct Node * list)
{
    if(!list_size(list))
        return list_size(list);
    else
        return 0;
}

struct Node * list_clear(struct Node * list)
{
    struct Node *p;
    Data* num;
    
    while(list != p)
        p = list_pop(list, num);
    
    list->val = 0;
    free(list);
    return NULL;
}
