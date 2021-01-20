#include <stdio.h>
#include <stdlib.h>

#define LEN 20

int compare (const void* a1, const void* a2);

struct Student
    {
    char surname[LEN];
    char name[LEN];
    char group [LEN];
    char birthday[11];
    int  ball[5];
    };

int main()
    {
    struct Student first =  {"Aaximov", "Maxim","B01-002", "01.01.2001",{1, 2, 3, 4, 5}};
    struct Student second = {"Bvanov",  "Ivan", "B01-004", "03.03.2002",{5, 5, 5, 4, 5}};
    struct Student third =  {"Comanov", "Roman","B01-005", "05.05.2000",{1, 2, 3, 4, 5}};
    struct Student fourth;
    printf("Enter Surname: ");
    scanf("%s", fourth.surname);
    
    printf("Enter Name: ");
    scanf("%s", fourth.name);
    
    printf("Enter Group: ");
    scanf("%s", fourth.group);
    
    printf("Enter Birhday: ");
    scanf("%s", fourth.birthday);
    
    struct Student array[4] = {first, second, third, fourth};
    
    qsort(array, 4, sizeof(array[0]), compare);
    
    int i;
    for(i = 0; i < 4; i++)
        printf("%s\n", array[i].surname);
    }
    
int compare (const void* a1, const void* a2)
    {
    return strcmp (((struct Student*)a1)->surname, ((struct Student*)a2)->surname);
    }
    
