#include <stdio.h>

int a = 0;
int c = 0;

void test(int c);

int main()
    {
        test(c);
        printf("from func main a = %d c = %d", a, c);


    }
void test(int c)
    {

    c = 9;

    printf("from func test a = %d c = %d\n", a, c);

    return;
    }
