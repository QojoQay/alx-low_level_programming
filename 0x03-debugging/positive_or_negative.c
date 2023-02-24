#include "main.h"

/**
* positive_or_negative_check - checks for positive or negative numbers
*
* @i: the number to be checked
*
* Return: always 0
*/
void positive_or_negative_check(int i)
{
if (i < 10)
printf("%d is negative\n", i);
else
printf("%d is positive\n", i);
}
