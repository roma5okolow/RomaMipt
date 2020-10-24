#include <stdio.h>

void test();

int main()
    {

    for (int i = 0; i < 5; i++)
        test();

    return 0;
    }

void test()
    {

    static int a = 10;

    printf("a = %d\n", a++);

    return;
    }
