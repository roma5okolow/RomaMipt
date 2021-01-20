#include<stdio.h>
#include<stdlib.h>

#define size 10

typedef struct list
    {
    int elem;
    struct List *next;
    } List;
    
void spis_print (List*);
List* insert_in_head (List* head, int number);
void insert_in_end (List* head, int number);
void insert_after_link (List* head,int link, int number);
List* delete_head(List* head);
void delete_end (List* head);
void delete_link (List* head,int link);
void print_in_file (List* head);
    
int main()
    {
    int i, a;
    
    List *head = NULL, *current, *prev;
    
    for(i = 0; i < size; i++)
        {
        current = (List*) malloc(sizeof(List));
        
        if (head == NULL) 
            head = current;
        
        else 
            prev->next = current;
        
        current -> next = NULL;
        
        scanf("%d", &(current -> elem));
        
        
        prev = current;
        }
    spis_print(head);
    printf("\n");
    
    head = insert_in_head (head, 66);
    spis_print(head);
     printf("\n");
    insert_in_end(head, 11);
    spis_print(head);
     printf("\n");
    insert_after_link(head, 5, 777);
    spis_print(head);
     printf("\n");
    head = delete_head(head);
    spis_print(head);
     printf("\n");
    delete_end(head);//////////////////
    spis_print(head);
     printf("\n");
    delete_link(head, 777);
    spis_print(head);
    printf("\n");
    print_in_file(head);
    
    return 0;
    }
    
void spis_print (List* head)
    {
    List *current = head;
    
    while(current != NULL)
        {
        printf("%d    %p\n", current -> elem, current -> next);
        current = current -> next;
        }
    return;
    }

List* insert_in_head (List* head, int number)
    {
    List *current;
    
    current = (List*) malloc(sizeof(List));
    
    current->elem = number;
    
    current->next = head;
    
    head = current;
    
    return current;
    
    }

void insert_in_end (List* head, int number)
    {
    List *current, *p;
    
    p = head->next;
    
    current = (List*) malloc(sizeof(List));
    
    while(p->next != NULL)
        p = p->next;
    
    p->next = current;
    
    current->elem = number;
    
    return;
    
    }

void insert_after_link (List* head,int link, int number)
    {
    List *current, *p;
    
    p = head;
    
    current = (List*) malloc(sizeof(List));
    
    while(p->elem != link)
        p = p->next;
    
    current->next = p->next;
    
    p->next = current;
    
    current->elem = number;
    
    return;
    
    }

List* delete_head(List* head)
    {
    List *new_head = head->next;
    
    head->elem = 0;
    free(head);
    return(new_head);
    }

void delete_end (List* head)
    {
    List *p, *prev;
    
    prev = head;
    p = head->next;
    
    while(p->next != NULL)
        {
        prev = p;
        p = p->next;
        }
    
    p->elem = 0;
    prev->next = NULL;
    free(p);
    
    return;
    }

void delete_link (List* head,int link)
    {
    List *current, *prev;
    
    current = head;
    
    while(current->elem != link)
        {
        prev = current;
        current = current->next;
        }
    current->elem = 0;
    
    prev->next = current->next;
    
    free(current);
    
    return;
    
    }

void print_in_file (List* head)
    {
    List *current = head;
    
    FILE* fp = fopen("list.txt", "w");
    fseek(fp, 0L, SEEK_SET);
    
    while(current != NULL)
        {
        fprintf(fp, "%d ", current -> elem);
        current = current -> next;
        }
    return;
    }

