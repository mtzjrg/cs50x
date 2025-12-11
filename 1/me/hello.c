/**
 * Hello, It's Me: Implement a program in C that prompts the user for their
 *      name and then says hello to that user. For insance, if the user's name
 *      is Adele, your program should print `hello, Adele\n`!
 */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("hello, %s\n", get_string("What's your name? "));
    return 0;
}
