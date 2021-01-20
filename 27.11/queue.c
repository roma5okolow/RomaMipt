#include <stdio.h>
#include <stdlib.h>

#define size 10

typedef struct list
    {
    int elem;
    struct List *next;
    } List;

typedef struct queue
    {
    List *front;
    List *rear;
    }Queue;

void spis_print (List*);
List* insert_in_head (List* head, int number);
void insert_in_end (List* head, int number);
void insert_after_link (List* head,int link, int number);
List* delete_head(List* head);
void delete_end (List* head);
void delete_link (List* head,int link);
void print_in_file (List* head);

void init(Queue* q);
void queue_push();
int isempty(Queue *q);
void insert(Queue *q, Item x)


int main()
{
    Queue q;
    init (&q);
}

void init(Queue* q)
{
    q->front = NULL;
    q->rear  = NULL;
}

int isempty(Queue *q)
{
    if(q->front == NULL)
        return 1;
    else
        return 0;
}

void insert(Queue *q, Item x)
{
    if(q->rear == NULL && q->rear == NULL)
        
        q->rear = insert_in_end(q->rear, x);
        
}









void spis_print (List* head)
    {
    printf("\n");
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
    
    FILE* fp = fopen("list.txt", "w+");
    fseek(fp, 0L, SEEK_SET);
    
    while(current->next != NULL)
        {
        fprintf(fp, "%d ", current->elem);
        current = current->next;
        }
    fprintf(fp, "%d ", current->elem);
    
    fclose(fp);
    return;
    }
