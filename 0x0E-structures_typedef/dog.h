#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog elements
 * @name: name of dog
 * @age: age of the dog
 * @owner: name of the dogs owner
 *
 * Description: Defines the dog and the type of dog's struct
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
/* Additional function prototpyes*/
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age,char *owner);
void free_dog(dog_t *d);
#endif
