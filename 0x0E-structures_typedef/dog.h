#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct to create a dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Name of owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
