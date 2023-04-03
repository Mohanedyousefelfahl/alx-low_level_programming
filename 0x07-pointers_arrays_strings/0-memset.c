#include "main.h"


/**
 * _memset - fills memory with a constant byte. 
 * @s: source string
 * @b: the contant byte for filling
 * @n: lenght of buffer
 * Return: new string.
 */


char *_memset(char *s, char b, unsigned int n)
{
        unsigned int itr;

        for (itr = 0; n > 0; itr++, n--)
        {
                s(itr) = b;
        }
	
        return (s);
}	
