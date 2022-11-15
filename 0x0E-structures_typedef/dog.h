#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - that define Poppy
 * @age: age
 * @name: name
 * @owner: owner
 *
 * Description: Define a new type struct dog in this file
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_H_ */
