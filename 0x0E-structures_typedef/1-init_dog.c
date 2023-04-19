#include "dog.h"
/**
  * init_dog -  initialize a variable of type struct dog
  * @d: puntero a la estructrua dog
  * @name: puntero a la varaible name de la estructura dog
  * @age: edad
  * @owner: puntero a la variable owner de la estructrua dog
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		d->age = age;
		d->owner = owner;
	}
}
