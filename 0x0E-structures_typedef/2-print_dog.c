#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints struct dog
 * @d: pointer to struct dog
 * @struct dog: contains data items of dog
 *
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
