#ifndef STRUCT_H
#define STRUCT_H

/**
 * struct dog - dog properties
 * @name: dog name
 * @age: dog age
 * @owner: god owner
 *
 * Description: a dog with different properties that can be used to identify it
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
