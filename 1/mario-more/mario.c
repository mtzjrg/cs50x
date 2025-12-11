/**
 * Mario: Implement a program in C that recreates the pyramid from the beginning
 *  of World 1-1 in Nintendo's Super Mario Bros, using hashes (`#`) for bricks,
 *  as in the below:
 *
 *      #  #
 *     ##  ##
 *    ###  ###
 *   ####  ####
 *
 *   Let the user decide how tall the pyramids should be by first prompting them
 *   for a positive `int` between, say 1 and 8, inclusive.
 */

#include <cs50.h>
#include <stdio.h>

int get_height(void);
void print_row(int height, int spaces);

int main(void)
{
    int height = get_height();
    for (int i = 0; i < height; i++)
        print_row(height, height - i - 1);

    return 0;
}

int get_height(void)
{
    const int MIN_HEIGHT = 1;
    int h = 0;

    while (h < MIN_HEIGHT)
        h = get_int("Height: ");
    return h;
}

void print_row(int h, int s)
{
    int i;
    for (i = 0; i < h; i++)
    {
        if (i >= s)
            printf("#");
        else
            printf(" ");
    }

    printf("  ");

    for (i = 0; i < (h - s); i++)
        printf("#");

    printf("\n");
}
