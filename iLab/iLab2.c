#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void CreateBuffer(char* buf);
void SetZero(char* buf, const long size);

int main()
    {

    char* buf;

    CreateBuffer(buf);
    
    puts(buf);

    }

void CreateBuffer(char* buf)
    {
    
    FILE* fp = fopen("ppc.txt", "r");

    fseek(fp, 0L, SEEK_END);

    const long size_file = ftell(fp);
    
    printf("size_file = %ld\n", size_file);
    
    buf = (char*)calloc(size_file, sizeof(char));
    
    printf("%p", buf);
    
    printf("fread = %lu", fread(buf, sizeof(char), size_file, fp));
    
    fclose(fp);
    
//    SetZero(buf, size_file);
    
    
    }


/*void qsort()
    {
    
    
    
    }
*/
void SetZero(char* buf, const long size)
    {
    
    long i = 1;
    
    while(i < size - 1)
        
        if(buf[i] == '\n')
            {
            buf[i] = '\0';
            i++;
            }
    }




/*strcmp(const char* s1, const char * s2)
    {

    int i;

    for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)

        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);

    if (s1[i] == s2[i] && strlen(s1) == strlen(s2))
        return 0;

    }*/
