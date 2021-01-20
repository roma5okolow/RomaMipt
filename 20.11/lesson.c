#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv) 
// int main(int argc, char *argv[])
    {
    int count=argc,i;
// char *end = NULL;

    printf("kol-vo arg = %d\n", count);
    
    for (i=0; i < count ; i++)
        printf("%u = %s\n", i, argv[i]);
    
    printf("\n");

    for (i=1; i < count; i++)
        printf("%u = %d\n", i, atoi(argv[i]));

// printf(“%u\t%Ld\n”, i, strtol(argv[i], &amp;end, 10));
    return 0;
}
