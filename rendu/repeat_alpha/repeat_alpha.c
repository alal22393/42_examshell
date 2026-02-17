#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}

	char *s = argv[1];
	int i;
	while (*s)
	{
		if ((('a'<= *s) && (*s <= 'z')) || (('A'<= *s) && (*s <= 'Z')))
		{
			if (*s >= 'a')
				i = *s - 'a' + 1;
			else
				i = *s - 'A' + 1;
			while (i > 0)
			{
				write(1, s, 1);
				i--;
			}
		}
		else
			write (1, s, 1);
		s++;
	}
	write(1, "\n", 1);
}
