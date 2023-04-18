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
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif

