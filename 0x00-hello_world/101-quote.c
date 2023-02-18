#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints a string to the standard error
 *
 * Return: Always 1 (Exit failure)
 */
int main(void)
{
char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int len = sizeof(str) - 1;  /* Exclude the null character at the end */
/* Using write system call to print to standard error */
write(STDERR_FILENO, str, len);
return (1);
}
