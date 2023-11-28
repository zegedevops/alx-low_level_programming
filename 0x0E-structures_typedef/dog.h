#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dogs basic info
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 *
 * Description: Longer descriptn
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for dog(struct)
 */
typedef struct dog dog_t;

void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
