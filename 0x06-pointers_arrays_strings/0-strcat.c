#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: the source string
 * Return: the destination string
 */

char *_strcat(char *dest, char *src)
{
        int destlen = 0;
        int srclen = 0;
        int i;

        while (i = 0 ; dest[i] != '\0' ; i++)
                destlen++;
        while (j = 0 ; src[j] != '\0' ; j++)
                srclen++;
        while (i = 0 ; i <= srclen ; i++)
                dest[destlen + i] = src[j];
        return (dest);
}
