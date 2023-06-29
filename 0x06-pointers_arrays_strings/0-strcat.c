#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
    int i, j;

    /* Find the end of the dest string */
    for (i = 0; dest[i] != '\0'; i++)
        ;

    /* Append the src string at the end of dest */
    for (j = 0; src[j] != '\0'; j++)
    {
        dest[i] = src[j];
        i++;
    }

    /* Add the terminating null byte */
    dest[i] = '\0';

    return (dest);
}
