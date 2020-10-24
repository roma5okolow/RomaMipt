#include <stdio.h>

void rotate_rectangle(struct Rect* input);

struct Point
    {
    int x;
    int y;
    };

struct Rect
    {
    struct Point Upper_Left   = {1, 3};
    struct Point Bottom_Right = {5, 1};
    } task;



int main()
    {

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
