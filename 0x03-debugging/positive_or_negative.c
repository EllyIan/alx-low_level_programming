#include "main.h"
/*
 * main - Determine if a number is positive or negative.
 * 0 : is the number to be checked
 *
 * Return: 0 on Success 
 */
void positive_or_negative(int i)
{
if (i < 0)
{
printf("%d is %s\n", i, "negative");
}
else if (i > 0)
{
printf("%d is %s\n", i, "postive");
}
else 
{
printf("%d is %s\n", i, "zero");
} 
return;
}
