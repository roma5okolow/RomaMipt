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
    printf("Enter first 10 elems fo your list:\n");
    
    int i, a, c, tmp, tmp1;
    
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
    while(1)
    {
        printf("Choose one of these options:\n");
        printf("Press 0 to do func \"spis_print\"\n");
        printf("Press 1 to do func \"insert_in_head\"\n");
        printf("Press 2 to do func \"insert_in_end\"\n");
        printf("Press 3 to do func \"insert_after_link\"\n");
        printf("Press 4 to do func \"delete_head\"\n");
        printf("Press 5 to do func \"delete_end\"\n");
        printf("Press 6 to do func \"delete_link\"\n");
        printf("Press 7 to do func \"print_in_file\"\n");
        printf("Press 8 to do func \"FINISH\"\n");
    
        scanf("%d", &c);
        
        switch(c)
        {
            case 0: spis_print(head);
                    printf("\n");
                    break;
            case 1: scanf("%d", &tmp);
                    head = insert_in_head (head, tmp);
                    spis_print(head);
                    printf("\n");
                    break;
            case 2: scanf("%d", &tmp);
                    insert_in_end(head, tmp);
                    spis_print(head);
                    printf("\n");
                    break;
            case 3: scanf("%d %d", &tmp, &tmp1);
                    insert_after_link(head, tmp, tmp1);
                    spis_print(head);
                    printf("\n");
                    break;
            case 4: head = delete_head(head);
                    spis_print(head);
                    printf("\n");
                    break;
            case 5: delete_end(head);
                    spis_print(head);
                    printf("\n");
                    break;
            case 6: scanf("%d", &tmp);
                    delete_link(head, tmp);
                    spis_print(head);
                    printf("\n");
                    break;
            case 7: print_in_file(head);
                    break;
            case 8: return 0;
            
        }
    }
    return 0;
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

