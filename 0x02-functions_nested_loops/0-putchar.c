#include <stdio.h>

/**
 * main - prints _putchar
 *
 * Return: Always 0(success)
 *
 */
int main(void)
{
 const char *str = "_putchar";

    while (*str != '\0') {
        putchar(*str);
        str++;
    }
    putchar('\n');
    return(0);

}
