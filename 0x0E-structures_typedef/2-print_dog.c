#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog.
 * @d: struct to initialize
 * Return: Nothing.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->age < 0)
		printf("Age:  (nil)\n");
	if (d->owner == NULL)
		printf("Owner:  (nil)\n");
	printf("Name: %s\nAge: %.6f\nOwner: %s\n", d->name, d->age, d->owner);
}
