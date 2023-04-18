#ifndef DOG_H
#define DOG_H
/**
 * struct dog - define new data type
 * @name: pointer to string
 * @age: input float
 * @owner: input string
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} t_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

