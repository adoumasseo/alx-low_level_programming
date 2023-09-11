#ifndef dog_h
#define dog_h
/**
 * struct dog - definition of a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of that dog
 *
 * Description: description of any dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
