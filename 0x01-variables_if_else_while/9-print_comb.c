#iclude < stdio.h >
/**
 * main - prints all combination of single digits
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 100 a++)
	{
		putchar(a + '0');
		if (a < 0)
		{
			putchar (',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
