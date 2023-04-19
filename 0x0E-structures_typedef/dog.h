#ifndef DOG_H
#define DOG_H
/**
  * struct dog - dog
  * @name: its name
  * @age: its age
  * @owner: its owner
  * Description: who cares?
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
/*dog_t *new_dog(char *name, float age, char *owner);*/
/*void free_dog(dog_t *d);*/
#endif /*ifndef DOG_H*/
