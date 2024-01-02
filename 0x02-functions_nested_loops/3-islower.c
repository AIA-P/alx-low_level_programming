#include <stdio.h>
#include "main.h"

/**
* _islower - prints lowercase character
* Description - prints a function that checks for lowercase character
*
* c - fuction for int c
* Description - prints c function
*
* Return: 0 success
*/

int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		/* refer in c*/
		if (c == i)
		{
			return (1);
		}

	}
	return (0);
}
