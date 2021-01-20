typedef struct list_element {
    int value;                  // Значение данного элемента
    struct list_element* next;  // Указатель на следующий элемент списка
    struct list_element* prev;	// Указатель на предыдущий элемент списка
} list_element;

void swap_elements(list_element* a, list_element* b)
    {
    list_element* save1 = a->next;
    list_element* save2 = a->prev;
    list_element* save3 = b->next;
    list_element* save4 = b->prev;
    
    (save2)->next = b;
    (save1)->prev = b;
    b->next = save1;
    b->prev = save2;
    
    (save4)->next = a;
    (save3)->prev = a;
    a->prev = save4;
    a->next = save3;
    }
