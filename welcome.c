#include <studio.h>
/**
 * welcoming - print name of a given variable
 * @engineers: print argument string
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void welcoming(char *engineers)
{
	printf("welcoming you all %s ", engineers);
}

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char *engineers;

	engineers = "Software engineers";
	welcoming(engineers);
	return (0);
}

