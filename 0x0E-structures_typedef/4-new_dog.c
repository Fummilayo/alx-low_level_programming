#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
unsigned int i, n, m;
dog_t *dog;
if (name == NULL || owner == NULL)
return (NULL);
dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);
for (i = 0; name[i]; i++)
;
i++;
dog->name = malloc(i *sizeof(char));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
for (n = 0; n < i; n++)
dog->name[n] = name[n];
dog->age = age;
for (m = 0; owner[m]; m++)
;
m++;
dog->owner = malloc(m *sizeof(char));
if (dog->owner == NULL)
{
free(dog->name);
free(dog);
return (NULL);
}
for (n = 0; n < m; i++)
dog->owner[n] = owner[n];
return (dog);
}
