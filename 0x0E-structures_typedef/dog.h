#ifndef DOG_H
#define DOG_H

/**
 * struct dog - list dates about pet
 *
 * @name: first member
 * @age: second member
 * @owner: third member
 */

struct dog
{

	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog - rename struct with typedef
 */

typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
