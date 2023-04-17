#ifndef DOG_H
#define DOG_H

/**
 * struct dog- structure that contains the type of details of the dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: Contains the dog's name, age and name of the owner
**/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
* dog_t - typedef for struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
