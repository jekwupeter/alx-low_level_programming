#include "main.h"

/**
 * *_strcpy - copy stringat the end of another string including \0
 *
 * *@dest: pointer to string to be copied to.
 * *@src: pointer to string to be copied.
 *
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for(i = 0; src[i] !=0; i++)
		*(dest + i) = src[i];
	i++;
	*(dest+i)=0;
}
