#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main - determine whether a number is positive or negative
 *
 * Return 0 on success
 * */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0) {
	printf("%d is %s\n", n, "positive");
}

if (n == 0) {
	printf("%d is %s\n", n, "zero");
}

if (n < 0) {
	printf("%d is %s\n", n, "negative");
}
return (0);
}
