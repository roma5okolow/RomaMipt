#include <stdio.h>

struct Point
    {
    int x;
    int y;
    };

struct Rect
    {
    struct Point Upper_Left   ;
    struct Point Bottom_Right ;
    } task;

void rotate_rectangle(struct Rect* input);

int main()
    {
    task.Upper_Left.x   = 1;
    task.Upper_Left.y   = 5;
    task.Bottom_Right.x = 5;
    task.Bottom_Right.y = 1;
    
    printf("Old points: Upper_Left (%d, %d), Bottom_Right: (%d, %d)\n",
            task.Upper_Left.x, task.Upper_Left.y, task.Bottom_Right.x, task.Bottom_Right.y);

    rotate_rectangle(&task);

    printf("New points: Upper_Left (%d, %d), Bottom_Right: (%d, %d)\n ",
            task.Upper_Left.x, task.Upper_Left.y, task.Bottom_Right.x, task.Bottom_Right.y);

    return 0;

    }

void rotate_rectangle(struct Rect* input)
    {
    int save_x = input->Upper_Left.x;

    int save_y = input->Upper_Left.y;

    input->Upper_Left.x   = -input->Bottom_Right.x;

    input->Upper_Left.y   = -input->Bottom_Right.y;

    input->Bottom_Right.x = -save_x;

    input->Bottom_Right.y = -save_y;
    }
