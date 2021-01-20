#include<stdio.h>
#include<stdlib.h>

int main(int argc, char** argv)
{
    int count = argc;
    int i;
    int sum = 0;
    char* end = NULL;
    for(i = 0; i < count - 1; i++)
        sum += strtol(argv[i+1], &end, 10);
    
    printf("%d\n", sum);
    printf("%s\n", end);
    
    return sum;
}
